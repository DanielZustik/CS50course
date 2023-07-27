from datetime import date


def main():
    print(date.today()) #returns current local date
    print(date(2029,1,1))
    today = date.today()
    birthday = date(2000,1,1)

    minutes = today - birthday
    print(minutes.mins)



...


if __name__ == "__main__":
    main()