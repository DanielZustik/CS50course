from datetime import date
import sys
import inflect

def main():
    try:
        birthday = date.fromisoformat(input("type date of ur birth in YYYY-MM-DD: "))
    except ValueError:
        sys.exit(1)
    print(inflect.engine().number_to_words(minutes_elapsed(birthday), andword="").capitalize(), "minutes")


def minutes_elapsed(birthday):
    today = date.today()
    daysFromBirth = today - birthday
    return daysFromBirth.days * 24 * 60

sys.exit(0)

if __name__ == "__main__":
    main()