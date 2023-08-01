def main():
    n = int(input("whats n? "))
    for s in sheep(n):
        print(s)


def sheep(n):
    flock = []
    for i in range(n):
        flock.append("💋" * i)
    return flock


main()