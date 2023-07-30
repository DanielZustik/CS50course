##redundunace, ne takhle##

#class Student:
 #   def __init__(self, name, house):
#        self.name = name
#        self.house = house
#
#
#class Professor:
#    def __init__(self, name, subject):
#        self.name = name
 #       self.subject = subject
########################################
########### | Inheritance |#############
class Wizard:
    def __init__(self, name):
        if not name:
            raise ValueError
        self.name = name


class Professor(Wizard):
    def __init__(self, subject):
        if not subject:
            raise ValueError
        super()
        self.subject = subject

class Student(Wizard):
    def __init__(self, house):
        if not house:
            raise ValueError
        self.house = house