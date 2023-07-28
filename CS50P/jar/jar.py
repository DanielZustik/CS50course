class Jar:
    def __init__(self, capacity = 12):
        self.capacity = capacity
        self._size = 0

    def __str__(self):
        return '🍪' * self.size


    def deposit(self, n):
        if (self.size + n) > self.capacity:
            raise ValueError
        self.size += n


    def withdraw(self, n):
        if (self.size - n) < 0:
            raise ValueError("not enough cookies in the jar")
        self.size -= n


    @property
    def capacity(self):
        return self._capacity


    @capacity.setter
    def capacity(self, capacity):
        if capacity < 0:
            raise ValueError("capcity must be positive int")
        self._capacity = capacity


    @property
    def size(self):
        return self._size


    @size.setter
    def size(self, size):  # The setter should take an additional argument
        if size < 0:
            raise ValueError("size cannot be negative")
        self._size = size
