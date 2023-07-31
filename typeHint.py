#python doesnt support type hint doesnt care but with mypy its possible to check
def meow(n: int):
    for _ in range(n):
        print("meow")


number: int = "asd" #try mypy typeHint.py... btw :int is type hint
try:
    meow(number)
except:
    ...
meow(3)