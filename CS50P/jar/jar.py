class Jar:
    def __init__(self, capacity = 12):
        if capacity < 0:
            raise ValueError("capcity must be positive int")
        self.capacity = capacity
    def __str__(self):
        ...


    def deposit(n):
        ...


    def withdraw(n):
        ...

    @property
    def capacity(self):
        ...

    @property
    def size(self):
        ...

jar = Jar(10)