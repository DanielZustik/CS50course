students = [
    {"name": "Harry", "house": "Gryffiondor"},
    {"name": "Hermione", "house": "Gryffiondor"},
    {"name": "Draco", "house": "Slytherin"},
    {"name": "Padma", "house": "Ravenclaw"},
    {"name": "Ron", "house": "Gryffiondor"},
]

houses = set()
for student in students:
    houses.add(student["house"])

print(houses)

for house in houses:
    print(house)