while (True):
    h = input("enter half s pyramid height: ")
    if h in [1, 2, 3, 4, 5, 6, 7, 8]:
        h = int(h)
        break

for _ in range(h):
    for __ in range(h - _ - 1):
        print(" ", end="")
    for ___ in range(_ + 1):
        print("#", end="")
    print("  ", end="")
    for ____ in range(_ + 1):
        print("#", end="")
    print()
