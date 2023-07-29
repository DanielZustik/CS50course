class Student:
    def __init__(self, name, house, patronus, street):
        if not name:
            raise ValueError("missing name")
        if house not in ["Pr", "Kac", "Sra"]:
            raise ValueError("not correct house")
        #######| atributes |#######
        self.name = name
        self.house = house
        self.patronus = patronus
        self.street = street


    def __str__(self):
        return f"a student with name {self.name} and house {self.house} with patronus {self.patronus} on the street {self.street()}"


    #getter
    def street(self):
        return self.street


    #setter
    def street(self, street):
        if street not in ["Hol", "Dul", "Hav"]:
            raise ValueError("not correct street")
        self.street = street


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
    street = input("Street:" )
    try:
        student = Student(name, house, patronus, street)
        print(student)
        print("Expecto patronum!", student.charm())
    except ValueError:
        print("=" *5 + "creating of a student failed ://" + "=" *5)

#####################| KONEC |###########################
main()