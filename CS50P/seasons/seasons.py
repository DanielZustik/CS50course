from datetime import date
import sys


def main():
    try:
        birthday = date.fromisoformat(input("type date of ur birth in YYYY-MM-DD: "))
    except ValueError:
        sys.exit()
    print("u are ", minutes_elapsed(birthday), "minutes old")


def minutes_elapsed(birthday):
    today = date.today()
    daysFromBirth = today - birthday
    return daysFromBirth.days * 24 * 60


if __name__ == "__main__":
    main()