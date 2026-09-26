# P-11-E Write a program that reads a text file and calculates the average word length and sentence length in that file.

l=["\nhi ","i am vatsal modi ","how are you?","no"]
f=open("test.txt","a")
for i in l:
    f.write(i)
f=open("test.txt")
print(f.read())
f.close()
