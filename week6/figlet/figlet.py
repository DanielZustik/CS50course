import sys
from pyfiglet import Figlet
import random

figlet = Figlet()

if len(sys.argv) != 1 or len(sys.argv) != 3:
    print("inproper usage...")
    sys.exit

s = input("insert ur text")

if len(sys.argv) == 1:
    random.seed()
    random.randint(0, 1)
    figlet.setFont(font=f)
    print(figlet.renderText(s))

elif len(sys.argv) == 3:

