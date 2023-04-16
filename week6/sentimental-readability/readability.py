def main():

    text = input("Text: ")

    counts = counting(text)
    index = 0.0588 * (counts["letters"] / counts["words"] * 100) - 0.296 * (counts["senteces"] / counts["words"] * 100) - 15.8
    print(index)

    #grade = ...
    #if grade < 1:
    #    print()
    #elif grade <16:
    #    print()
    #else:
    #    print()


def counting(text):

    letters = len(text) # a to z only
    words = len(text.split()) # 
    senteces = 0

    for c in text:
        if c == "." or c == "!" or c == "?":
            senteces += 1

    return {"letters" : letters, "words" : words, "senteces" : senteces}

main()