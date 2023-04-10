import csv

with open("2019w.csv", "r") as file:
    csv_reader = csv.DictReader(file)

    for row in csv_reader:
        print(row)

    print(csv_reader[0])