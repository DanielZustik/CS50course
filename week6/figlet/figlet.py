import sys
from pyfiglet import Figlet
import random

figlet = Figlet()

if len(sys.argv) != 1 and len(sys.argv) != 2:
    print("inproper usage...")
    sys.exit()

s = input("insert ur text: ")

if len(sys.argv) == 1:
    random.seed()
    fonts = figlet.getFonts()
    print(fonts[0])
    i = random.randint(0, len(fonts))
    font = fonts[i]

    figlet.setFont(font=font)
    print(figlet.renderText(s))

#elif len(sys.argv) == 3:

