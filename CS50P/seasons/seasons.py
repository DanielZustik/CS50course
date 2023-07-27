from datetime import date


def main():

    today = date.today()
    birthday = date(2000,1,1)
    print(today) #returns current local date
    print(birthday)

    days = today - birthday
    print(days.days * 24 * 60)



...


if __name__ == "__main__":
    main()