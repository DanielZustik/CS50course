def main():
    n = int(input("whats n? "))
    for s in sheep(n):
        print(s)


def sheep(n):

    for i in range(n):
        yield "💋" * i ### something like return, returns just one value at a time...


main()