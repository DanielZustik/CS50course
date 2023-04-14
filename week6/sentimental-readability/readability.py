

def main():

    text = input("Text: ")

    counts = counting(text)
    #grade = ...
    #if grade < 1:
    #    print()
    #elif grade <16:
    #    print()
    #else:
    #    print()


def counting(text):

    letters = len(text)
    words = len(list(text))

    for c in text:
        if c == "." or "!" or "?":
            senteces += 1

    return {"letters" : letters, "words" : words, "senteces" : senteces}

main()