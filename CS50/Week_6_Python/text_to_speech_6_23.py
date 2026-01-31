import pyttsx3

engine = pyttsx3.init()
name = input("what's your name: ")
engine.say(f"hello {name}")

# engine.say("Hello, welcome to the text to speech conversion demo.")
engine.runAndWait()