#balance = 0

#def main():
#    print("Balance:", balance)
#    deposit(100)
#    withdraw(50)
#    print("Balance:", balance)


#def deposit(n):
#    global balance
#    balance += n


#def withdraw(n):
#    global balance
#    balance -= n


#if __name__ == "__main__":
#    main()

class Account:
    def __init__(self):
        self._balance = 0

    @property
    def balance(self):
        return self._balance

    