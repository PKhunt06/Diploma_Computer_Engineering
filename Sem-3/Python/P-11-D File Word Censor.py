# P-11-D Write an automated censor program that reads the text from a file and creates a new file where all of the four-letter words have been replaced by "****". 
#  You can ignore punctuation, and you may assume that no words in the file are split across multiple lines.

f=open("test.txt","a")
f.write("hello world 22")
f=open("test.txt","r")
print(f.read())
f.close()
