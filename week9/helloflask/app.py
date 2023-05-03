from flask import Flask, render_template, request
from CS50 import SQL

app = Flask(__name__)

db = SQL("sqlite:///db.db")

@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "GET":
        return render_template("index.html")
    else:
        print("form submitted")
        color = request.form.get("color")
        input = request.form.get("name")
        return render_template("color.html", color=color, input=input)