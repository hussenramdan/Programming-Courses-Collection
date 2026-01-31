import sys
# numbers = [4,6,2,8,1,0]
# for i in range(len(numbers)):
#     if numbeers[i] == 0:
#         print("found")


numbers = [4,6,2,8,1,0]
if 9 in numbers:
    print("found")
    sys.exit(0)

print("not found")
sys.exit(1)



import sys
names = ["ahmed" , "ail","gamal", "david" ,"khaled"]
if  'david' in names:
    print("Found")
    sys.exit(0)
print("not found")
sys.exit(1)