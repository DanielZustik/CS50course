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
cursor.execute("""INSERT INTO houses (house_name) VALUES ('Slytherin'), ('Ravenclaw'), ('Hufflepuff'), ('Gryffindor');""")
cursor.execute("""INSERT INTO heads (head_name, house_id) VALUES ('Severus Snape', 1), ('Filius Flitwick', 2), ('Pomona Sprout', 3), ('Minerva McGonagall', 4);""")

with open('students.csv', "r") as csv_f:
    dictcsv = csv.DictReader(csv_f)
    STR = []
    for row in dictcsv:
        STR.append(row)
    for dict in STR:
        values = dict["student_name"]
        if dict["house"] == "Slytherin":
            cursor.execute("INSERT INTO students (student_name, house_id) VALUES (?, ?)", (values, 1))
        elif dict["house"] == "Ravenclaw":
            cursor.execute("INSERT INTO students (student_name, house_id) VALUES (?, ?)", (values, 2))
        elif dict["house"] == "Hufflepuff":
            cursor.execute("INSERT INTO students (student_name, house_id) VALUES (?, ?)", (values, 3))
        elif dict["house"] == "Gryffindor":
            cursor.execute("INSERT INTO students (student_name, house_id) VALUES (?, ?)", (values, 4))

db.commit()
db.close()
#zobrazeni vysledku, stejna db jako puvodni, ale rozdelena na tri tably s realacemi vuci sobe
# select * from students join houses on students.house_id = houses.id join heads on houses.id = heads.house_id;