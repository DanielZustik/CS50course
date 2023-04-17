menu = {
    "baja taco": 4.00,
    "burrito": 7.50,
    "bowl": 8.50,
    "nachos": 11.00,
    "quesadilla": 8.50,
    "super burrito": 8.50,
    "super quesadilla": 9.50,
    "taco": 3.00,
    "tortilla salad": 8.00
}

cost = 0.00
while True:
    try:
        item = input("Item: ")
        item = item.lower()
        cost += menu[item]
        print(f"Total: ${cost: .2f}")
    except EOFError:
        print()
        break
    except KeyError:
        continue
