#first, last = input("what s ur full name?").split(" ")
#print(f"hello, {first}")

def total(galleons, sickles, knuts):
    return (galleons * 17 + sickles) * 29 + knuts

print(total(100, 50, 25), "Knuts")