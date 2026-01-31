# form cs50 import get_int
scores = []

#1_ get 3 integers form User
#2_ append to list

for i in range(3):
    score = get_int("score: ")
    scores.append(score)



# scores = [72, 73, 33]
# print(f"Averge { (scores[0]+scores[1]+scores[2])  /3 }")


print(f"Averge { sum(scores)  /len(scores)  }")







i = 0
i += 2

score = [10, 20, 30]
scores += [40,50]
print(scores)