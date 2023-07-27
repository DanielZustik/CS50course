import sys
from pyfiglet import Figlet
import random

figlet = Figlet()

if len(sys.argv) != 1 and len(sys.argv) != 3:
    print("inproper usage...")
    sys.exit()

fonts = figlet.getFonts()

if len(sys.argv) == 1:
    s = input("insert ur text: ")
    random.seed()
    print(fonts[0])
    i = random.randint(0, len(fonts))
    font = fonts[i]

    figlet.setFont(font=font)
    print(figlet.renderText(s))

elif len(sys.argv) == 3:
    if sys.argv[1] == "-f" or sys.argv[1] == "--font" and sys.argv[2] in fonts:
            s = input("insert ur text: ")
            figlet.setFont(font=argv[2])
            print(figlet.renderText(s))
    else:
         print("inproper usage")
         sys.exit()

