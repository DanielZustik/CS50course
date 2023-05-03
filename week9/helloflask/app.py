from flask import Flask, render_template, request
from cs50 import SQL

app = Flask(__name__)

db = SQL("sqlite:///db.db")

@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "GET":
        db.execute("INSERT into db () VALUES (?)", 1)
        refreshes = db.execute("SELECT COUNT(*) FROM users")
        return render_template("index.html", refreshes=refreshes)
    else:
        print("form submitted")
        color = request.form.get("color")
        input = request.form.get("name")
        return render_template("color.html", color=color, input=input)