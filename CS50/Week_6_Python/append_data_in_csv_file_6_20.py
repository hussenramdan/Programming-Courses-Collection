import csv

file = open("Week6/phonebook.csv","a")

# get name , number
name = input("name: ")
number = input("number: ")

# appen data to scv file as row
writer = csv.writer(file)
writer.writerow([name,number])

file.close()