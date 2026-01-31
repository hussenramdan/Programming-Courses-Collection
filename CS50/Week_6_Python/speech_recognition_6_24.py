import speech_recognition as sr

# إنشاء الكائن
rec = sr.Recognizer()

# استخدام الميكروفون كمصدر
with sr.Microphone() as src:
    print("Say something...")
    audio = rec.listen(src)

# تحويل الصوت إلى نص
try:
    text = rec.recognize_google(audio, language="en-US")  # ممكن تغير اللغة
    print("You said:", text)
except sr.UnknownValueError:
    print("لم أستطع فهم الصوت")
except sr.RequestError:
    print("في مشكلة بالاتصال بخدمة Google")
