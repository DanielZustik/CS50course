from datetime import date
import sys


def main():
    try:
        birthday = date.fromisoformat(input("type date of ur birth in YYYY-MM-DD: "))
        print(birthday)
        print(date.today())
    except ValueError:
        sys.exit()
    print("u are ", minutes_elapsed(birthday), "minutes old")


def minutes_elapsed(birthday):
    today = date.today()
    daysFromBirth = today - birthday
    return (daysFromBirth * 24 * 60).days


if __name__ == "__main__":
    main()