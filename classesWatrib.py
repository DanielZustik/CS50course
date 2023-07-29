class Student:
    def __init__(self, name, house):
        if not name:
            raise ValueError("missing name")
        if house not in ["Pr", "Kac", "Sra"]:
            raise ValueError("not correct house")
        self.name = name
        self.house = house


    def __str__(self):
        return f"a student with name {self.name} and house {self.house}"


def main():
    name = input("Name:" )
    house = input("House:" )
    try:
        student = Student(name, house)
        print(student)
    except ValueError:
        print("creating of a student failed")

#####################KONEC###########################
main()