students = [
    {"name": "Harry", "house": "Gryffindor"},
    {"name": "Hermione", "house": "Gryffindor"},
    {"name": "Draco", "house": "Slytherin"},
    {"name": "Padma", "house": "Ravenclaw"},
    {"name": "Ron", "house": "Gryffindor"},
]

"""
gryffindors = [
    student["name"] for student in students if student["house"] == "Gryffindor"
]

print(gryffindors)
"""
def is_gryffindor(s):
    if s["house"] == "Gryffindor":
        return 