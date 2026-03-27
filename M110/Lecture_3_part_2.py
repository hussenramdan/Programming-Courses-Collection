# 1_Write a program the Reads from user a student grades in 
# TMA , MTA and FINAL exam the program 
# should calculate the Total grade and 
# displays in the screen if the student
#  passed or not . A student passes a course 
# if the total grade is 50 or more

# TMA = eval( input ('Enter the TMA Grade: ') )
# MTA = eval( input ('Enter the MTA Grade: ') )
# Final = eval(input ('Enter the Final Gade: ') )
# total = TMA + MTA + Final

# if total >= 50:
#     print(total,'You have passed the course')
# else:
#     print(total,'You have failed the course')




# 2_ Write a program that Reads from the user an integer and displays on the screen a message if this integer is odd or even

# number = int (input ('Enter an integer: ') )
# if number % 2 != 0:
#     print('This integer is an odd')
# else:
#     print('This integer is an even')

# elif number % 2 == 0:
#     print('This integer is an even number')





# 3_ write a program that Reads from the user 2 positive integer and
#  displays on the screen a message if this integer is a multiple of the second or not.

# first = int (input ('Enter the first positive ') )
# second = int (input ('Enter the second positive'))
# if first % second == 0:
#     print(first ,'is a Multiple of ',second)
# else:
#     print(second,'is not a multiple of',first)




# 4_ Write a program that Reads from the user an integer and 
# displays on the screen a message if this integer is divisible by both 2 and 3 or not

# number = int (input ('Enter an number: '))
# if number % 2 == 0 and number % 3 == 0:
#     print(number ,'is divisible by both 2 and 3')
# else:
#     print( number,'is not divisible by both 2 and 3') 





# number = int (input ('Enter an number: ') )
# if number > 0:
#     print('positive')
# elif number < 0:
#     print('negative')
# else:
#     print('zero')






# 6_ Write a program that Reads the user the base and the height of a triangle 
# the program calculates and prints the area of the triangle using the formula  
# Area = 1 / 2 base * height

# base = eval (input ('Enter a base: ') )
# height = eval (input ('Enter a height: ') )
# # area = base * height
# if base == 0 or base < 0:
#     print('Error')
# elif height == 0 or height < 0:
#     print('Error')
# else:
#     Area = 1 / 2 * base * height 
#     print('The Area is triangle', Area)


# 7_ Ask the user a temperature Then ask them what units celsius or fahrenheit the temperature is in your program should convert the temperature to the other unit 
# The Convesion Formulas are : F = 9 c / 5 + 32 and c = 5 (F - 32) / 9

# Temperature = eval (input ('Enter a Temperature: ') )
# unit = input ('Enter the unit: C/F: ')
# if unit == "C":
#     F = 9 * Temperature / 5 + 32
#     print('The Temperature in fahrenheit is:',round(F,1) )
# elif unit == 'F':
#     C = 5 * (Temperature - 32) / 9
#     print('The Temperature in celsius is: ',round(C,1) )








# 8_ Write a program that Reads form the user the lengths of the bases and the heights of two triangles . The program should calculate the area of the two triangles and print them Then it should print a message that indicates which triangle has a langer area or if they have the same area

# BaseLength1 = eval (input ('Enter the base length of the first triengle: ') )
# HeightLength1 = eval (input ('Enter the height length of the first triangle: ') )

# BaseLength2 = eval (input ('Enter the vase length of the second triangel: '))
# HeightLength2 = eval (input ('Enter the height length of the second triangle: '))

# Area_first = 1/2 + BaseLength1 + HeightLength1
# print("The Area of the first triangle is :", Area_first)

# Area_second = 1/2 + BaseLength2 + HeightLength2
# print('The Area of the second triangle is: ', Area_second)

# if Area_first > Area_second:
#     print('The Area of the first triangle us larger than the second triangle')
# elif Area_first < Area_second:
#     print('The Area of the second triangle is larger than the first triangle')
# else:
#     print('The Area of the first triangle is equal to the first triangle')





# 9_ Academic slatus of AOU students could be

# 'Regular' if their GPA >= 2
# 'Warned' if their GPA < 2 and number of warnings they received < 5
# 'Dismissed' if their GPA < 2 and number of warnings they received = 5

# Write a program that Reads form user the GPA of a student and the number of warnings
# he/she received then prints the acafemic stalus pf the student

# GPA = eval (input ('Enter GPA: ') )
# warnings = int (input('Enter the number of warnings: ') )
# if GPA >= 2:
#     print('Regular')
# elif GPA < 2 and warnings < 5:
#     print('warned')
# else:
#     print('Dismissed')





# 10_ Write a program that asks the user to enter a length in centimeters. If the user enters a
# negative length, the program should tell the user that the entry is invalid. Otherwise, the
# program should convert the length to inches and print out the result rounded to three
# decimal places. There are 2.54 centimeters in an inch.

# length = eval (input ('Enter the length in centimeters: ') )
# if length < 0:
#     print('length should be positive!! ')
# else:
#     inch = length / 2.54
#     print(length,'Centimeters is : ',round(inch,3) , 'inches')




# 11_ Scientists measure an object's mass in kilograms and its weight in newtons. If you know
# the amount of mass of an object in kilograms, you can calculate its weight in newtons with
# the following formula:

# weight = mass * 9.8

# Write a program that asks the user to enter an object's mass, then calculates its
# weight. If the object weighs more than 500 newtons, display a message indicating
# that it is too heavy. If the object weighs less than 100 newtons, display a message
# indicating that it is too light. The output should be as follows:

# output = 
# Enter the object's mass in kilograms: 100
# Object Weight: 980.0
# The object is too heavy. It weighs more than 500.0 Newtons.

# mass = eval (input ('Enter the object\'s mass in kilograms: ') )
# weight = mass  * 9.8

# print('Object Weight: ', round(weight, 1))

# if weight > 500:
#     print('The object is too heavy it.it weights more then 500.0 Newtons')
# elif weight < 100:
#     print('The object is too light it.it weights less then 100.0 Newtons')
