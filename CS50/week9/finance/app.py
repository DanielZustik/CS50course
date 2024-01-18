import os

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from tempfile import mkdtemp
from werkzeug.security import check_password_hash, generate_password_hash

from helpers import apology, login_required, lookup, usd

# Configure application
app = Flask(__name__)

# Custom filter
app.jinja_env.filters["usd"] = usd

# Configure session to use filesystem (instead of signed cookies)
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///finance.db")
db.execute("PRAGMA foreign_keys = ON;")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET", "POST"])
@login_required
def index():
    """Show portfolio of stocks"""
    if request.method == "GET":
        portfolio = db.execute("SELECT symbol, SUM(shares) as total_shares FROM transactions WHERE user_id = ? GROUP BY symbol", session["user_id"])
        for title in portfolio:
            info = lookup(title["symbol"])
            title["price"] = info["price"]

        cash = db.execute("SELECT cash FROM users WHERE ID = ?", session["user_id"])

        return render_template("index.html", portfolio=portfolio, cash=cash[0]["cash"])
    else:
        funds = request.form.get("funds")

        try:
            funds = int(funds)
        except ValueError:
            return apology("")

        current_funds = db.execute("SELECT cash FROM users WHERE id = ?", session["user_id"])
        funds = funds + current_funds[0]["cash"]
        db.execute("UPDATE users SET cash = ? WHERE id = ?", funds, session["user_id"])
        return redirect ("/")

@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    """Buy shares of stock"""
    if request.method == "POST":
        symbol = request.form.get("symbol")
        if lookup(symbol) == None:
            return apology("symbol doesnt exists")

        shares = request.form.get("shares")
        price = lookup(symbol)
        price = price["price"]

        if not symbol:
            return apology("Stock symbol required")

        quote = lookup(symbol)
        if quote is None:
            return apology("Invalid stock symbol")

        try:
        # Convert the input to an integer
            shares = int(shares)
        # Check if the number is positive
            if shares <= 0:
                return apology("Invalid number of shares")
        except ValueError:
        # The input could not be converted to an integer
                return apology("Invalid number of shares")

        cash = db.execute("SELECT cash FROM users WHERE ID = ?", session["user_id"])
        print(cash)
        cash = int(cash[0]["cash"])
        if cash < (price * shares):
            return apology("Not enough money")
        else:
            db.execute("UPDATE users SET cash = ? WHERE ID = ?", (cash - price * shares), session["user_id"])

        db.execute("INSERT INTO transactions (user_id, symbol, price_per_share, shares) VALUES (?, ?, ?, ?)", int(session["user_id"]), symbol, price, shares)

        return redirect("/")

    else:
        return render_template("buy.html")


@app.route("/history")
@login_required
def history():
    """Show history of transactions"""
    transactions = db.execute("SELECT * FROM transactions WHERE user_id = ?", session["user_id"])

    return render_template("history.html", transactions=transactions)


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    # Forget any user_id
    session.clear()

    # User reached route via POST (as by submitting a form via POST)
    if request.method == "POST":

        # Ensure username was submitted
        if not request.form.get("username"):
            return apology("must provide username", 403)

        # Ensure password was submitted
        elif not request.form.get("password"):
            return apology("must provide password", 403)

        # Query database for username
        rows = db.execute("SELECT * FROM users WHERE username = ?", request.form.get("username"))

        # Ensure username exists and password is correct
        if len(rows) != 1 or not check_password_hash(rows[0]["hash"], request.form.get("password")):
            return apology("invalid username and/or password", 403)

        # Remember which user has logged in
        session["user_id"] = rows[0]["id"]

        # Redirect user to home page
        return redirect("/")

    # User reached route via GET (as by clicking a link or via redirect)
    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    # Forget any user_id
    session.clear()

    # Redirect user to login form
    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    """Get stock quote."""
    if request.method == "POST":
        symbol = request.form.get("symbol")
        value_symbol = lookup(symbol)

        if value_symbol == None:
            return apology("symbol doesnt exists")

        return render_template("quoted.html", symbols=value_symbol)

    else:
        return render_template("quote.html")


@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""
    if request.method == "POST":
        username = request.form.get("username")
        password = request.form.get("password")
        confpass = request.form.get("confirmation")

        if not username or not password or not confpass:
            return apology("choose fill in all inputs!")

        if not password == confpass:
            return apology("password and its confirmation do not match")

        rows = db.execute("SELECT * FROM users WHERE username = ?", username)
        if len(rows) > 0:
            return apology("user already exists")

        passhash = generate_password_hash(password, method='pbkdf2:sha256', salt_length=8)
        db.execute("INSERT INTO users (username, hash) VALUES(?, ?)", username, passhash)


        return redirect("/")
    else:
        return render_template("register.html")


@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    """Sell shares of stock"""

    if request.method == "GET":
        owned_shares = db.execute("SELECT symbol, SUM(shares) FROM transactions GROUP BY symbol HAVING SUM(shares) > 0;")

        symbols = []
        for symbol in owned_shares:
            symbols.append(symbol["symbol"])

        return render_template("sell.html", symbols=symbols)

    else:
        owned_shares = db.execute("SELECT symbol, SUM(shares) FROM transactions GROUP BY symbol HAVING SUM(shares) > 0;")
        sell_stock = request.form.get("the_option")
        sell_shares = request.form.get("shares")
        try:
            sell_shares = int(sell_shares)
        except ValueError:
            return apology("")

        match = False
        for shares in owned_shares:
            if shares["symbol"] == sell_stock and shares["SUM(shares)"] >= sell_shares:
                match = True
                price = lookup(sell_stock)
                price = price["price"]
                cash = db.execute("SELECT cash FROM users WHERE ID = ?",  session["user_id"])
                cash = int(cash[0]["cash"])
                db.execute("INSERT INTO transactions (user_id, symbol, price_per_share, shares) VALUES (?, ?, ?, ?)", int(session["user_id"]), sell_stock, price, -sell_shares)
                db.execute("UPDATE users SET cash = ? WHERE ID = ?", (cash + price * sell_shares), session["user_id"])
        if match == False:
                return apology("not enough shares")

        return redirect("/")

@app.route("/change_password", methods=["GET", "POST"])
@login_required
def change_password():
    if request.method == "GET":
        return render_template("change_password.html")

    else:
        password = request.form.get("password")
        new_password = request.form.get("new_password")
        new_password_again = request.form.get("new_password_again")

        rows = db.execute("SELECT hash FROM users WHERE id = ?", session["user_id"])
        if not check_password_hash(rows[0]["hash"], password):
            return apology("wrongly added password")

        if not new_password:
            return apology("type in new password")

        if not new_password == new_password_again:
            return apology("new password doesnt match check")

        if len(new_password) < 5:
            return apology("new password must be at lest 5 characters long")

        passhash = generate_password_hash(new_password, method='pbkdf2:sha256', salt_length=8)
        db.execute("UPDATE users SET hash = ? WHERE id = ?", passhash, session["user_id"])

        return redirect("/")