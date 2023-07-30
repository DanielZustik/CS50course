class Student:
    def __init__(self, name, house, patronus, street):
        if not name:
            raise ValueError("missing name")
        if house not in ["Pr", "Kac", "Sra"]:
            raise ValueError("not correct house")
        #######| initializing atributes/instance variables |######## those trigger setter, if definied or in other words if it is actually atribute
        self.name = name
        self.house = house
        self.patronus = patronus
        ###atribute##
        self.street = street #calls also setter before setting


    def __str__(self):
        return f"a student with name {self.name} and house {self.house} with patronus {self.patronus} on the street {self.street}"


    #getter
    @property
    def street(self):
        return self._street


    #setter
    @street.setter
    def street(self, street):
        if street not in ["Hol", "Dul", "Hav"]:
            raise ValueError("not correct street")
        self._street = street


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