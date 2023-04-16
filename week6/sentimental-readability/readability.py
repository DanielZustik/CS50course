def main():

    text = input("Text: ")

    counts = counting(text)
    index = 0.0588 * (counts["letters"] * 100)

    #grade = ...
    #if grade < 1:
    #    print()
    #elif grade <16:
    #    print()
    #else:
    #    print()


def counting(text):

    letters = len(text)
    words = len(text.split())
    senteces = 0

    for c in text:
        if c == "." or c == "!" or c == "?":
            senteces += 1

    return {"letters" : letters, "words" : words, "senteces" : senteces}

main()