import os

from cs50 import SQL
from flask import Flask, flash, jsonify, redirect, render_template, request, session

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///birthdays.db")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":

        # TODO: Add the user's entry into the database
        name = request.form.get("name")
        month = request.form.get("month")
        day = request.form.get("day")
        id = request.form.get("id")
        id_ = request.form.get("id_")
        addoredit = request.form.get("addoredit")
        print(id)

        #db.execute("INSERT INTO BIRTHDAYS (name, month, day) VALUES (?, ?, ?)", (name, month, day))
        if name and month and day and addoredit == "add" :
            db.execute("INSERT INTO BIRTHDAYS (name, month, day) VALUES (:name, :month, :day)", name=name, month=month, day=day)
        if id and name and month and day and addoredit == "edit" :
            db.execute("UPDATE birthdays SET name = name, month = month, day = day WHERE id = id")
        if id_:
            db.execute("DELETE FROM BIRTHDAYS WHERE id = :id_", id_=int(id_))

        return redirect("/")

    else:

        # TODO: Display the entries in the database on index.html
        data = db.execute("SELECT * FROM birthdays;")

        return render_template("index.html", data=data)


