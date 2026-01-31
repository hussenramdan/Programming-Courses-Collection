from cs50 import get_int , get_string

n = get_int("n: ")
if n % 2 == 0:
    print("even")
else:
    print("odd")






# Agree
from cs50 import get_string

s = get_string("Do You Agree? ")    #_> .lower()


# if s == "y" or s == "Y" or s == "yes" or s == "YES":
if s .lower() in ['y','yes']:
    print("Agreed")

# elif s == 'n' or s == 'N' or s == 'no' or s == 'No':
# elif s in ["n","N","no","NO"]:
elif s .lower() in ["n","no"]:
    print("Not Agreed")