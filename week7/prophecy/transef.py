from cs50 import SQL
import csv

db = SQL("sqlite:///newww.db")

with open('students.csv', "r") as csv_f:
    dictcsv = csv.DictReader(csv_f)
    STR = []
    for row in dictcsv:
        STR.append(row)
    for dict in STR
        values = 
        db.execute("INSERT INTO students (student_name, house_id) VALUES (?)", values)

