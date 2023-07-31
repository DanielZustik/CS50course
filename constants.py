### not enforced by python, honor system.. capitalized name
#MEOWS = 3
#for _ in range(MEOWS):
#    print("meow")


class Cat:
    MEOWS = 3

    def meow(self):
        for _ in range(Cat.MEOWS):
            print("meows")


cat = Cat()
cat.meow()