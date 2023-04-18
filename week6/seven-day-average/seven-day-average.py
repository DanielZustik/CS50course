import csv
import requests


def main():
    # Read NYTimes Covid Database
    download = requests.get(
        "https://raw.githubusercontent.com/nytimes/covid-19-data/master/us-states.csv"
    )
    decoded_content = download.content.decode("utf-8")
    file = decoded_content.splitlines()
    reader = csv.DictReader(file)


    # Construct 14 day lists of new cases for each states
    new_cases = calculate(reader)

    # Create a list to store selected states
    states = []
    print("Choose one or more states to view average COVID cases.")
    print("Press enter when done.\n")

    while True:
        state = input("State: ")
        if state in new_cases:
            states.append(state)
        if len(state) == 0:
            break

    print(f"\nSeven-Day Averages")

     #Print out 7-day averages for this week vs last week
    comparative_averages(new_cases, states)


# TODO: Create a dictionary to store 14 most recent days of new cases by state
def calculate(reader):
    data = []
    states = set()
    for row in reader:
        data.append(row)
        states.add(row["state"])

    cases = {} #celkova DB setridana dle statu
    new_cases = {} #pouze poslednich 15 dnu
    for state in states:
        cases[state] = [] #vytvoreni radku se staty, pricemz kazdy radek ma prazdny list
        new_cases[state] = []

    for dict in data:
        cases[dict["state"]].append(dict["cases"])

    for key in cases: #dictionary kde key je state a u kazdeho je list s 14 poslednimi stavy
        new_cases[key] = cases[key][-15:]

    for key in new_cases:
        new_cases[key] = [int(case_count) for case_count in new_cases[key]]

    for key in new_cases:
        for i in range(14, 0, -1):
            new_cases[key][i] = new_cases[key][i] - new_cases[key][i - 1]

    return new_cases

# TODO: Calculate and print out seven day average for given state
def comparative_averages(new_cases, states):

    averages_w1 = {}
    averages_w2 = {}
    for state in states:
        averages_w1[state] = 0
        averages_w2[state] = 0

    for state in new_cases:
        averages_w1[state] = sum(new_cases[state][8:15]) / 7
        averages_w2[state] = sum(new_cases[state][1:8]) / 7

    for state in states:
        print(f"{state} had a 7-day average of {averages_w1[state]:0f} and incerease/decrease of {(averages_w1[state] - averages_w2[state]) / averages_w1[state] * 100}%")

main()

