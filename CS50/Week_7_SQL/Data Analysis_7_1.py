import csv

# get_data = input("language: ").lower() . strip()
# counts = 0



counts = {}
with open("fav.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        lang = row['language']  .lower() .strip()


#     # if get_data == lang:
#     #     counts += 1
# print(counts)

    if lang not in counts:
         counts[lang] = 0

    counts[lang] += 1

# def get_values(lang):
#     return counts[lang]

for c in sorted(counts , key = lambda lang:counts[lang] , reverse=True):
    print(f"{c} : {counts[c]}")