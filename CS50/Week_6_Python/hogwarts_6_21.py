import csv

students = []

with open("hogwarts.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        students.append({"name": row["name"], "house": row["house"]})

for student in students:
    print(student["name"], student["house"])
