import csv

# فتح الملف في وضع الإضافة (append)
file = open("phonebook.csv", "a")

# أخذ الاسم والرقم من المستخدم
name = input("Name: ")
number = input("Number: ")

# كتابة البيانات كسطر جديد في CSV
writer = csv.writer(file)
writer.writerow([name, number])

# إغلاق الملف
file.close()
