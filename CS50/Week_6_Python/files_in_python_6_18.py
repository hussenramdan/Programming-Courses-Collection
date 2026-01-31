# r => only read
# w => only write "clear old data"
# a => append "seve to old dana"


# open file
file = open("test.txt","r")


# do what you want
data = file.read()
data = file.readable()
print(data)


#close file
file.close()