# =========================================================
# Question 1 — Data Types
# (integer) (float) (string) (bool)
# =========================================================

# Explain
x = 5                 # integer
y = 5.5               # float
s = "Ahmed"           # string
b = 5 > 1             # bool (True)
p = 5 == 4            # bool (False)

print(x)
print(y)
print(s)
print(b)
print(p)
print('khaled')

print("Hello M110")
print("Hello","M110")
print("Hello"     ,   "How Are You")      # No space between texts

print('This Course Is About "M110"')
print("This Course Is About 'M110'")
print("===========================")


# =========================================================
# Question 2 — Data Types / Print
# =========================================================

print(5)
print(5.5)
print("Aou")
print('Aou')
print("5>3")       # string
print(5 > 3)       # boolean
print(-2 > 0)      # boolean
print("===========================")


# =========================================================
# Question 3 — Quotes in Strings ('' , "" , ' "" ' , " '' ")
# =========================================================

print("'AOU'")
print('"AOU"')
print("Aou", "University")
print("apple", "banana", "cherry")
print("Don't panic!")
print('Your TMA Is About "ICI Tech"')
print("===========================")



# =========================================================
# Question 4 — print() Options (sep = "", end = "")
# sep = separator
# end = what happens at end of line
# =========================================================

print('I','Love','Python', sep=' ')
print('MT110','Python','AOU', sep='*')   # separator *

print('M110', end='\n')                    # new line
print('Tm105')

print('I', end='')
print('love', end='')
print('python')

print('I', end='*')
print('love', end=' ')
print('python')

print('I', end='_')
print('love', end='_')
print('python')
print("===========================")



# =========================================================
# Question 5 — Escape Characters
# \n = New Line
# \t = Tab
# \' = '
# \" = "
# \\ = One Backslash
# =========================================================

print('M110\nis\na\nPython\nCourse\n')
print('I\nlove\npython')

print('M110\tcourse')
print('I\tlove\tpython')

print('I don\'t Love Python')
print('I study \"IT\" Courses')

print("You 'Finish'")
print("M110 \'Python\' ")
print('M110 \"Python\" ')

print('M110 \Python')     # Backslash warning
print('M110 \\Python')
print('He\\She can pass the course')
print("===========================")


# =========================================================
# Question 6 — String + String , format( number, '.2f')
# =========================================================

x = 5
y = 6
print(x + y)

print('M110', 'Python')
print('M110' + 'Python')       # Text + Text
# print('M110' + 5)            # Error (string with number)
print('M110' + str(5))         # convert number to string

f = 12345.6789
print(format(f, '.0f'))

print(format(12345.6789, '.4f'))
print(format(12345.6789, '.2f'))
print(format(12345.6722, '.2f'))
print(format(12345.6789, '.1f'))
print(format(12345.6789, '.0f'))
print("===========================")

# =========================================================
# Question 7 — Variables
# Rules of variables:
# num_1 , num1  , nu_m 
# 1num nu m  !* Error
# print , return  (keywords)
# =========================================================

# Explan
num1 = 10
num_2= 20
nu3m = 30

nu_m, Num_two, num_3 = 10, 20, 30
print(nu_m, Num_two, num_3)
print(Num_two)
print(num_3)

e = 10
r = 20
t = e + r
print(t)
print("===========================")


# =========================================================
# Question 8 — String Indexing , Slicing
# =========================================================

# index start from 0
# negative index starts from -1

# example string
# M   1   1   0       P   y   t    h    o   n
# 0   1   2   3    4  5   6   7    8    9   10    
#-11 -10 -9  -8   -7 -6  -5  -4   -3   -2   -1

# len() = all indexing
# print ("o" in s)   => 9

# s[Start : end : Move ]
# len(s)-1 : -len(s)-1 : -1

s = "M110 Python"

print(s[5])
x = s[0]
print(x)

print(len(s))

print("P" in s)

print(s[0:3:1])
print(s[0::])
print(s[:-1:])
print(s[::2])

print(s[0:7:2])
print(s[-5:-1])
print(s[4:-1])

print(s[-8:0:-1])
print("===========================")



# =========================================================
# Question 9 — String Practice
# =========================================================

word = "Hello,world!"

print(word[0:2])
print(word[:2])
print(word[7:])
print(word[0:11:2])

# reverse string
print(word[::-1])
print(word[len(word)-1: -len(word)-1:-1])
print(word[10:-14:-1])

# print(word[-5::-1])
# print(word[5::-1])
# print(word[-6:-4])

b = "M110 Python"
be = b[0:2]
be2 = b[-2:]

print("The First Two Characters Are:", be, "And", be2)


# =========================================================
# Question 10 — Input / eval => Auto
# =========================================================

# p = input("Enter Your Number: ")

x = eval(input("Enter a Number: "))
y = eval(input("Enter Second Number: "))

print("The sum of two numbers is: ", x + y)


# =========================================================
# Question 11 — Operators
# +  -  *  /
# / /  **  %
# =========================================================

print(5 + 2 * 4)
print(10 / 2)
print(10 // 2)
print(10 / 2 - 3)
print(8 + 12 * 2 - 4)
print(6 - 3 * 2 + 7 - 1)

print((6 - 3) * (2 + 7) / 3)

print(2 ** 4)
print(10 % 2)
print(11 % 2)


print(int(3.4))
print(int(3.0))
print(float(3))
print("===========================")


# =========================================================
# Question 12 — Type Conversion
# =========================================================

a = '100'
z = '50'

# print(int(a) + z)   # Error
print(int(a) + int(z))

i = '2'
u = '75'

print(i + u)
print(int(i) + int(u))


m = int(input('Enter a number: '))
print(m)

p = int('70') + int('10')
l = float(5)
k = 1
j = str(k) + 'M'
print(p)
print(l)
print(k)
print(j)

t = '2.5'
r = '2.75'

print(t + r)
print(float(t) + float(r))


e = 2
w = 7

print(e + w)
print(str(e) + str(w))

q = "M110 my, Exam"
print(q[8:14])


print(3 + 8 / 4 % 2)
print(15 / 3 + 2 * (4 - 1))


print((6 - 3) * (2 + 7) / 3 % 2 / 2 * 4 ** 2)
print("===========================")


# =========================================================
# Question 13 — String Testing Functions
# =========================================================

T = "MMMM"

print(T.isalnum())    # string or numbers   M110

print(T.isalpha())    # string only         M
print(T.isdigit())    # numbers only        110

print(T.islower())    # lowercase           M
print(T.isupper())    # uppercase           m

print(T.isspace())    # spaces only         
print("===========================")    


# =========================================================
# Question 14 — String Modification
# strings are immutable (cannot change original string)
# =========================================================

M = 'hussein'

print(M.upper())      # HUSSEIN
print(M.lower())      # hussein

print(M.lstrip())     # remove spaces from left
print(M.rstrip())     # remove spaces from right

char = 'h'
print(M.lstrip(char))   # remove 'h' from left

char = 'n'
print(M.rstrip(char))   # remove 'n' from right

print(M.strip())        # remove spaces from  /n /t Left And right

char = 'h'
print(M.strip(char))    # remove 'h' from Left And right
print("===========================")