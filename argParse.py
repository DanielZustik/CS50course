"""
import sys

if len(sys.argv) == 1:
    print("meow")
elif len(sys.argv) == 3 and sys.argv[1] == '-n':
    n = int(sys.argv[2])
    for _ in range(n):
        print("meow")
else:
    print("usage: meows.py")
"""

import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-n")
args = parser.parse_args() #imports sys library itself, looks into args...