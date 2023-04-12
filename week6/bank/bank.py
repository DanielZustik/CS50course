s = input("Hello, sir! <greet back:>")
s = s.lower().strip()

if s == "hello":
    print("0 $")
elif s[0] == "h":
    print("20 $")
else:
    print("100 $")