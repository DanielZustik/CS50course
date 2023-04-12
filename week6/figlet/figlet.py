import sys
from pyfiglet import Figlet
import random

figlet = Figlet()

if len(sys.argv) != 0 or len(sys.argv) != 2:
    print("inproper usage...")
    sys.exit

s = input("insert ur text")

if len(sys.argv) == 0:
    random.seed()
    print("az tu")
    #i = random.randint(0, len(figlet.getFonts()))
    #str font = random cislo in list figlet.getFonts()

    #figlet.setFont(font=f)
    #print(figlet.renderText(s))

#elif len(sys.argv) == 3:

