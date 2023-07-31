#first, last = input("what s ur full name?").split(" ")
#print(f"hello, {first}")

def total(galleons, sickles, knuts):
    return (galleons * 17 + sickles) * 29 + knuts

#coins = [100, 50, 25]
#print(total(*coins), "Knuts") ##coins unpacking list into individual values
#print(total(galleons=100, knuts=25, sickles=50), "Knuts")
coins = {"galleons": 100, "sickles": 50, "knuts": 25}
#print(total(coins["galleons"], coins["knuts"], coins["sickles"]), "Knuts")
print(total(**coins), "Knuts") #unpacking keys and values... returing them. not just values as unpacking list.. but still works because above ..knuts=25, sickles=50)