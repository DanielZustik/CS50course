from jar import Jar

def main():
    test_init()


def test_init():
    jar = Jar()
    assert jar.capacity == 12



def test_str():
    jar = Jar()
    assert str(jar) == ""
    jar.deposit(1)
    assert str(jar) == "🍪"
    jar.deposit(11)
    assert str(jar) == "🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪"


def test_deposit():
    jar = Jar()
    jar.deposit(10)
    assert jar.size == 10
    jar.deposit(2)
    assert jar.size == 12


def test_withdraw():
    jar = Jar()
    jar.deposit(10)
    jar.withdraw(8)
    assert jar.size == 2


if __name__ == "__main__":
    main()