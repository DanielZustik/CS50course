s = input("Hello, sir! <greet back:>")
s = s.lower().strip()

if s.index(0) in ["hello"]:
    print("0 $")
elif s[0] == "h":
    print("20 $")
else:
    print("100 $")