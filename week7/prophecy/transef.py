import sqlite3
import csv

with open('students.csv', "r") as csv_f:
    dictcsv = csv.DictReader(csv_f)
    STR = []
    for row in dictcsv:
        STR.append(row)

