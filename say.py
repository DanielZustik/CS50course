import cowsay
import pyttsx3

engine = pyttsx3.init()
this = input("what to say?")
cowsay.cow(this)
engine.say(this)
engine.runAdnWait()