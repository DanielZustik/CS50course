#python doesnt support type hint doesnt care but with mypy its possible to check
def meow(n: int) -> None: # -> means return None... because there is no return code
    for _ in range(n):
        print("meow")


number: int = "asd" #try mypy typeHint.py... btw :int is type hint
try:
    meow(number)
except:
    ...
meow(3)
print(meow(1)) #doesnt retunr value so it will print None