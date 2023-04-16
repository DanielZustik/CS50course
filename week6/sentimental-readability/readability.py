def main():

    text = input("Text: ")

    counts = counting(text)
    index = round(0.0588 * (counts["letters"] / counts["words"] * 100) -
                  0.296 * (counts["senteces"] / counts["words"] * 100) - 15.8)

    if index < 1:
        print("Before Grade 1")
    elif index >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {index}")


def counting(text):

    letters = 0
    for c in text:
        if c >= "a" and c <= "z":
            letters += 1
        if c >= "A" and c <= "Z":
            letters += 1
    words = len(text.split())
    senteces = 0

    for c in text:
        if c == "." or c == "!" or c == "?":
            senteces += 1

    return {"letters": letters, "words": words, "senteces": senteces}


main()