def meow(n):
    """Meow n times.""" #documentation
    return "meow" * n

def bark(n):
    """
    Barks n times.

    :param n: Number of times to bark
    :type n: int
    :raise TypeError: If n is not an int
    :return: A string of barks per line
    :rtype: str
    """
    return "Bark\n" * n

print(bark(10), end="")

