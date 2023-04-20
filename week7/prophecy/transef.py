from cs50 import SQL
import csv
import sqlite3

db = sqlite3.connect("new.db")
cursor = db.cursor()

cursor.execute("""
CREATE TABLE houses (
    id INTEGER,
    house_name TEXT,
    PRIMARY KEY(id)
);
""")
cursor.execute("""
CREATE TABLE students (
    id INTEGER,
    student_name TEXT,
    house_id INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY(house_id) REFERENCES houses(id)
);
""")
cursor.execute("""
CREATE TABLE heads (
    id INTEGER,
    head_name TEXT,
    house_id INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY(house_id) REFERENCES houses(id)
);
""")

with open('students.csv', "r") as csv_f:
    dictcsv = csv.DictReader(csv_f)
    STR = []
    for row in dictcsv:
        STR.append(row)
    for dict in STR:
        values = dict["student_name"]
        cursor.execute("INSERT INTO students (student_name) VALUES (?)", (values,))

db.commit()
db.close()