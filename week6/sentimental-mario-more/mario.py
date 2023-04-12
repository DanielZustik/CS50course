while (True):
    h = int(input("enter half s pyramid height: "))
    if h in [1, 2, 3, 4, 5, 6, 7, 8]:
        break

i = 1
for _ in range(h):
    print()
    for _ in range(i):
        print("#", end="")
        i +=1