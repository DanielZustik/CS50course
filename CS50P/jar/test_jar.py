from jar import Jar


def test_init():
    jar = Jar()
    if jar.capacity != 12:
        raise 
