def main():
    jar = Jar()



class Jar:
    def __init__(self, capacity=12):
        if capacity < 0:
            raise ValueError('A very specific bad thing happened.')
        self.capacity = capacity
        self.n = 0

    def __str__(self):
        return f"Jar with as many cookies as: {self.size}"

    def deposit(self, n):
        self.n += n

    def withdraw(self, n):
        self.n -= n

    @property
    def capacity(self):
        return self.capacity

    @property
    def size(self):
        return self.n

main()