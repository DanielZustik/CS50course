from datetime import date


def main():
    
    birthday = date(2000,1,1)
    print(minutes_elapsed(birthday))


def minutes_elapsed(birthday):
    today = date.today()
    days = today - birthday
    return (days * 24 * 60).days


if __name__ == "__main__":
    main()