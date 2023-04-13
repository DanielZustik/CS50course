import sys

c = input("Credit card number: ")

def checksum():
    sum = 0
    sum_ = 0
    for d in range(len(c) - 2, -1, -2):
        doubl = int(c[d]) * 2
        if doubl >= 10:
            sum += (doubl // 10) + (doubl % 10)
        else:
            sum += doubl
    for g in range(len(c) - 1, -1, -2):
        sum_ += int(c[g])
    check = sum + sum_
    check = str(check)

    if check[len(check) - 1:] == '0':
        return True
    else:
        print("INVALID")
        sys.exit()

if c [0] == '4' and (len(c) == 13 or len(c) == 16):
    checksum()
    print("VISA")
elif c [:2] in ['34', '37'] and len(c) == 15:
    checksum()
    print("AMEX")
elif c [:2] in ['51', '52', '53', '54', '55'] and len(c) == 16:
    checksum()
    print("MASTERCARD")
else:
    print("INVALID")



