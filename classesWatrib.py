class Student:
    def __init__(self, name, house, patronus):
        if not name:
            raise ValueError("missing name")
        if house not in ["Pr", "Kac", "Sra"]:
            raise ValueError("not correct house")
        self.name = name
        self.house = house
        self.patronus = patronus


    def __str__(self):
        return f"a student with name {self.name} and house {self.house} with patronus {self.patronus}"


    def charm(self):
        match self.patronus:
            case "pes":
                return "xD"
            case "kocka":
                return ">O"
            case _:
                return "xF"

#####################| MAIN |############################
def main():
    name = input("Name:" )
    house = input("House:" )
    patronus = input("Patronus:" )
    try:
        student = Student(name, house, patronus)
        print(student)
        print("Expecto patronum!", student.charm())
    except ValueError:
        print("creating of a student failed")

#####################| KONEC |###########################
main()