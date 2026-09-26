# P-11-F Write a program that reads two strings stored in two different text files and prints a string containing the characters of each string interleaved. 
# Remove white spaces from both strings before string interleaving. For example, two strings “Hello World” and “Sky is the Limit” should generate output “HSeklyliosWtohrelLdimit”.

f=open("test.txt")
c=f.readlines()
a=[]
b=[]
for i in c:
    b=i.split()
    a.extend(b)
print("number of lines",len(c))
print("number of words",len(a))
