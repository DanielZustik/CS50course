"""
def main():
    yell("This is CS50!")

def yell(words):
    print(phrase.upper())

main()
"""

def main():
    yell(["This", "is", "CS50!"])

def yell(words):
    uppercased = []
    for word in words:
        uppercased.append(word.upper())
    print(*uppercased)

main()