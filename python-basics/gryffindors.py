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
    return s["house"] == "Gryffindor"


gryffindors = filter(is_gryffindor, students)
print(gryffindors)
for gryffindor in sorted(
    gryffindors, key=lambda s: s["name"]
):  # just without name function lambda
    print(gryffindor["name"])
