import random
# class int:
    #def __init__(x, base=10):
        #...
# int1 = int()
# int2 = int(5)
# int2.something()
# int3 = int(asd).... VAlueError
# its datatype actually generaly but also datatype of python and the object of a class/datatype
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
    def street(self): #property
        return self._street #instance variable underline atribute... do not touch inst var with _


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

class Hat: #only one exists in Potter universe... so no instances, just class
    houses = ["Pr", "Kac", "Sra"] #class variable


    @classmethod
    def sort(cls, name): #cls reference to class
        print(name, 'shoudl be in', random.choice(cls.houses))

    @classmethod
    def get(cls):
        name = input("name:")
        ...
        return cls(name) #zavolani init resp. defkato constructor
    #umozni encapsulovat vsechno do classy tj. neni treba se ptat na udaje ke studentovi v main


#####################| MAIN |############################
def main():
    name = input("Name:" )
    house = input("House:" )
    patronus = input("Patronus:" )
    street = input("Street:" )
    #nebo namisto toho callnout student = Student.get()
    try:
        student = Student(name, house, patronus, street)
        print(student)
        print("Expecto patronum!", student.charm())
    except ValueError:
        print("=" *5 + "creating of a student failed ://" + "=" *5)

    print(Hat.sort("Dan"))
#####################| KONEC |###########################
main()