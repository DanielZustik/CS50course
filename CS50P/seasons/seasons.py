from datetime import date


def main():
    birthday = date(2000,1,1)
    print(birthday)
    print(minutes_elapsed(birthday))


def minutes_elapsed(birthday):
    today = date.today()
    days = today - birthday
    print(days.days * 24 * 60)


if __name__ == "__main__":
    main()