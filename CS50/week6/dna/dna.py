import csv
import sys


def main():

    # TODO: Check for command-line usage
    if not len(sys.argv) == 3:
        print("not valid usage! 2 args")
        sys.exit()

    # TODO: Read database file into a variable
    with open(sys.argv[1], "r") as csv_f:
        dictcsv = csv.DictReader(csv_f)
        STR = []
        for row in dictcsv:
            STR.append(row)

    # TODO: Read DNA sequence file into a variable
    with open(sys.argv[2], "r") as dna_f:
        DNA = dna_f.read()

    # TODO: Find longest match of each STR in DNA sequence
    keys = STR[0].keys()
    keys_l = list(keys)
    keys_l = keys_l[1:]

    profile = {}
    for key in keys_l:
        profile[key] = str(longest_match(DNA, key))

    # TODO: Check database for matching profiles
    found = True
    for dict in STR:
        for key in keys_l:
            if dict[key] == profile[key]:
                found = True
            else:
                found = False
                break
        if found == True:
            print(dict["name"])
            break
        elif dict == STR[-1]:
            print("No match")

    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
