def main():
    hello("world")
    goodbye("world")


def hello(name):
    print(f"hello, {name}")


def goodbye(name):
    print(f"goodbye, {name}")


if __name__ == "__name__": #so __name__ variable is automaticlly beign set to "__name__" if running this file/program from termina;
    main()                  # otherwise the other file/program which is actually beign executed has it... meaning if i just export functions
                            # from here, the mani() wont be called