class Student:
    def __init__(self, name, house):
        if not name:
            raise ValueError("missing name")
        if house not in ["Pr", "Kac", "Sra"]:
            raise ValueError("not correct house")
        self.name = name
        self.house = house


def main():
    name = input("Name:" )
    house = input("House:" )
    try:
        student = Student(name, house)
        print(student.name)
        print(student.house)
    except ValueError:
        print("creating of a student failed")


#####################KONEC###########################
main()
