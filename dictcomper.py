students = ["Hermione", "Harry", "Ron"]

"""

gryffindors = []

for student in students:
    gryffindors.append({"name": student, "house": "Gryffindor"})

"""

gryffindors = [{"name": student, "house": "Gryffindor"} for student in students] # quicker way with dict comprehension

print(gryffindors)