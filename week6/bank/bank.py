s = input("Hello, sir! <greet back:>")
s = s.lower().strip()

if "hello" in s and s.find("hello") == 0:
    print("0 $")
elif s[0] == "h":
    print("20 $")
else:
    print("100 $")