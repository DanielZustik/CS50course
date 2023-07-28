class Jar:
    def __init__(self, capacity = 12):
        if capacity < 0:
            raise ValueError("capcity must be positive int")
        self.capacity = capacity
    def __str__(self):
        return print(self.size * "🍪", " in the jar")


    def deposit(n):
        if (self.size + n) > self.capacity:
            raise ValueError("capactity was overreached")
        self.size += n


    def withdraw(n):
        if (self.size - n) < 0:
            raise ValueError("not enough cookies in the jar")
        self.size -= n

    @property
    def capacity(self):
        return f"{self.capacity} is capacity of the jar"

    @property
    def size(self):
        ...

jar = Jar(10)