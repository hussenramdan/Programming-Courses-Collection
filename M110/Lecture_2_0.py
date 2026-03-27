# 4 Data Type
# (intger) (float) (string) (bool) 

# Explain
x = 5
y = 5.5
s = "Ahmed"
b = 5 > 1
p = 5 == 4

print (x)
print (y)
print(s)
print(b)
print(p)
print('khaled')

print("Hello M110")
print("Hello","M110")
print("Hello"           "How Are You")     # not Espac

print('This Coure Is About "M110"')
print("This coure Is About 'M110'")
print("===========================")


# Questions 1 
print(5)
print(5.5)
print("Aou")
print('Aou')
print("5>3")
print(5>3)
print(-2>0)
print("===========================")

# Questions 2 '' , "" , ' "" ' , " '' "
print("'AOU'")
print('"AOU"')
print("Aou","University")
print("apple","banana","cherry")
print("Don't panic!")
print('Your TMA Is About "ICI Tech"')
print("===========================")

# Questions 3 sep = ' ' , end = '\n'
print('I', 'Love','Python', sep = ' ')
print('MT110','Python','AOU', sep = '*')       # sep = '' Espac


print('M110', end = '\n')                       # end = '' NowLine
print('Tm105')

print('I', end = '')
print('love', end = '')
print('python')

print ('I', end = '*')
print ('love', end = ' ')
print ('python')

print('I', end = '_')
print('love', end = '_')
print('python')


# Questions 4 (\n = new Line) , (/t = Tap 8 ), (\' = "") , (\\ = One \) 

print ('M110\n is\n a\n Python\n Course\n')
print('I\nlove\npython')

print('M110\t course')
print('I\tlove\tpython')


print('I don\'t Love Python')
print('I study \"IT\" Courses')

print("You 'Finsh'")
print("M110 \'Python\' ")
print('M110 \"Python\" ')


print('M110 \Python')
print('M110 \\Python')
print('He\\She can pass the course')
print("===========================")



# Questions 5 ( + = Text + Text) , (fromat(number, '.2f'))
x = 5
y = 6
print (x + y)

print ('M110', 'Python')
print ('M110' + 'Python')       # Text + Text
# print('M110' + 5)             # Not Text With Number
print('M110' + str(5))           # True

f = 12345.6789
print(format(f , '.0f'))

print(format(12345.6789, '.2f'))
print(format(12345.6722, '.2f'))
print(format(12345.6789, '.1f'))
print(format(12345.6789, '.0f'))


# Questions 6 (x,y,z = 10,20,30) , (Name Varible = nu_n , num1) Not (print,return, string , int, nu m 1num => !@#$%^&*)( )
x = 10
y = 20
z = 30
x,y,z = 10,20,30
print(x,y,z)
print(y)
print(z)

e = 10
r = 20
t = x + y
print(t)


# Questions 7 s[index]  , len() index Hers 12345 not index 0 , (Located in "o" in s) , ( s[Start : end : Move ])=> (len(s)-1 : -len(s)-1 : -1)
m    1    1    0         p   y   t   h   o   n
0    1    2    3    4    5   6   7   8   9   10      Number index
-11  -10  -9   -8   -7   -6  -5  -4  -3  -2   -1       Negative index


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
print(s[-1:4])

print(s[-8:0:-1])


# Q Aou
word = "Hello,world!"
print(word[0:2])
print(word[:2])
print(word[7:])
print(word[0:11:2])

#نفس الفكرة 3
print(word[::-1])
print(word[len(word)-1: -len(word)-1:-1])
print(word[10:-14:-1])


# print(word[-5::-1])
# print(word[5::-1])
# print(word[-6:-4])

b = "M110 Python"
be = b[0:2]
be2 = b[-2:]
print("The Frist Two Character Is:", be, "And" , be2)



# Questions 8 (  input("")  ) , eval (input() ) , eval => Auto

p = input("Enter Your Number: ")

x = eval(input ("Enter a Number: "))
y = eval(input("Enter Second Number: "))
#sum = x + y
print ("The sum of two number is:", x + y)






Questions 9 ( + - * / )  ,  (  //  **  % )

print(5+2*4)
print(10/2)
print(10//2)
print(10/2-3)
print(8+12*2-4)
print(6-3*2+7-1)
print((6-3) * (2+7) /3)
print(2**4)
print(10 % 2)
print(11 % 2)


print(int(3.4))
print(int(3.0))
print(float(3))


a = '100'
z = '50'
## print (int(a) + z)    # Error

i = '2'
u = '75'
print(i + u)
print (int(i) + int(u))

m = int (input ('Enter a number: ') )
m = float (input('Enter a number: '))
m = str (input('Enter a number: '))
m = eval = (input('Enter a number: '))
print(m)

p = int ('70') + int ('10')
l = float(5)
k = 1
j = str(k) + 'M'



t = '2.5'
r = '2.75'
print( t + r)
print(float(t) + float(r))

e = 2
w = 7
print(e + w )
print(str(e) + str(w))


print(3 + 8 / 4 % 2 )

print(15 / 3 + 2 * (4-1) )

q = "M110 my, Exam"
print(q[8:14])


print( (6-3) * (2+7) / 3 % 2 / 2 * 4**2)



# Questions 10 (String Testing 1_ isalnum() 2_isalpha 3_isdigit 4_islower 5_isupper 6_isspace
# (String Modifation (immutable Not Update) 1_ 
T = "M110"
print(T.isalnum())          # M111M
print(T.isalpha())          # MmmMm
print(T.isdigit())          # 12345
print(T.islower())          # MASDF
print(T.isupper())          # asdfg
print(T.isspace())          #    \n \t  



M = 'hussein'
print(M.upper())            #HUSSEIN
print(M.lower())            #hussein
print(M.lstrip())           # Not Space Or /n /t  Left 
print(M.rstrip())           # Not Space Or /n /t right
print(M.lstrip(char))       # delete Char 'h'left
print(M.rstrip(char))       # delete char 'n' right
print(M.strip)              # Not Space Or /n /t right And left
print(M.strip(char))        # delete char 'h' right And Left
