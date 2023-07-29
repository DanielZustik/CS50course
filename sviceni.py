class Student:
    def __init__(self, name, house):
        if not name:
            raise ValueError("")
        if not house:
            raise ValueError("")
        self.name = name
        self.house = house


def main():
    house = ["Prdelov", "Kacerov", "Srandov"]
    name = input("Name:" )
    student = Student(name, house[0])

    print(student.name)
    print(student.house)

#####################KONEC###########################
main()