"""
def main():
    yell("This is CS50!")

def yell(words):
    print(phrase.upper())

main()
"""
"""
def main():
    yell("This", "is", "CS50!")

def yell(*words):
    uppercased = []
    for word in words:
        uppercased.append(word.upper())
    print(*uppercased)

main()
"""
"""
def main():
    yell("This", "is", "CS50!")

def yell(*words):
    uppercased = map(str.upper, words) # without () not ccalling it now.. map maps upper to all the words... returns brand new list with applied function
    print(*uppercased)

main()
"""


######| List comprehensions |######
def main():
    yell("This", "is", "CS50!")


def yell(*words):
    uppercased = [word.upper() for word in words]
    print(*uppercased)


main()
