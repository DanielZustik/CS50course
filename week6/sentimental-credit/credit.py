c = input("Credit card number: ")

for d in c
    sum += int(d) * 2
for d in c
    sum_ += int(d)
check = sum + sum_
check = str(check)
if check[:len(check) - 1]

if c [0] == '4' and len(c) == 13 or len(c) == 16:
    print("VISA")
elif c [:2] in ['34', '37'] and len(c) == 15:
    print("AMEX")
elif c [:2] in ['51', '52', '53', '54', '55'] and len(c) == 16:
    print("MASTERCARD")
else
    print("INVALID")

