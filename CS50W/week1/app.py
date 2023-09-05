
from flask import Flask, render_template

# Configure application
app = Flask(__name__)
app.run


@app.route("/", methods=["GET", "POST"])
def index():
    return render_template(index.html)
