# P-11-C Write a program that reads a text file and displays all the numbers found in the file.

f=open("test.txt","r")
b=f.readlines()
print(b)
f.close()
