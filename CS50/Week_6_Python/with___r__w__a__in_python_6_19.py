# r      only read
# r+     read and writ

# w     only write       cearte file       clear old data
# w+    write and read   cearte file       clear old data

# a     only write       create file       save old data
# a+    write and read   create file       save old data


with open("test.csv","r+") as file:
    file.read()


# # file = open("test.csv","r+")
# print(  file.readable()   )
# print(  file.writable()   )

# file.close()