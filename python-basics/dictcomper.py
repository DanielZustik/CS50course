students = ["Hermione", "Harry", "Ron"]

"""

gryffindors = []

for student in students:
    gryffindors.append({"name": student, "house": "Gryffindor"})

"""
"""
gryffindors = [{"name": student, "house": "Gryffindor"} for student in students] # quicker way with list comprehension
                                                                                # no cconditional this time, and on the left is what i want
                                                                                #and on the right is what from / for what all
"""
gryffindors = {student: "Gryffindor" for student in students} #dict comprehension

print(gryffindors)