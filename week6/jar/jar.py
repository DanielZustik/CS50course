class Jar:
    def __init__(self, capacity=12):
        if capacity < 0:
            raise ValueError('A very specific bad thing happened.')
        self.capacity = capacity

    def __str__(self):
        return f"Jar with as many cookies as: {self.n}"

    def deposit(self, n):
        self.n += n

    def withdraw(self, n):
        self.n -= n

    @property
    def capacity(self):
        ...

    @property
    def size(self):
        self.n = 0
