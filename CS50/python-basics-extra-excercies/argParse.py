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

parser = argparse.ArgumentParser(description="Meows")
parser.add_argument("-n", default=2, help="number of times to meow", type=int) # mpython argParse.py -h
args = parser.parse_args() #imports sys library itself, looks into args...

for _ in range(args.n):
    print("meow")
