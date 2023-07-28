from jar import Jar

def main():
    test_init()


def test_init():
    jar = Jar()
    assert jar.capacity == 12


if __name__ == "__main__":
    main()