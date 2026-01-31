def hello():
    print("hello world")

print("line one")
hello()


def hello(name):
    print(f"hello {name}")
answer = input("what is your name? ")
hello(answer)
# hello("ahmed")

#     print("in the function")
# print("out of functoin")




def sum(num1, num2):
    print(num1 + num2)
    return num1 + num2

result = sum(5,7)
print(result * 2)
