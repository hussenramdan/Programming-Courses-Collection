# int 
x = True    False
name = "hello"
num = 20
print(type(num))


#type        brackets      ordered         mutable        duplicate      use

#list       []              yes             yes            yes           عام
#tuple      ()              yes             no             yes           احداثيات
#set        {}              no              no             no          العمليات الرياضيه
#dict       {}              key             yes            no yes      قواعد البينات


#1_list

num = [10,"hello", True , False, 1.5, [1,"ahmed"]]
num[1] = "hello hussein"
print(num[0])



#2_tuple

my_typle = (1,2,3,4)
# my_typle[2] = 5
print(my_tuple[2])

#3_set

my_set = {"ahmed","ali","gamal", "mai"}
print(my_set)


#4_dict

car = {
    "color":"red",
    "model":2022,
    "price":200000
}
car["color"] = "black"
print(car["color"])
