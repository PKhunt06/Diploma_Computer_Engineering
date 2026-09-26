# P-10-G Numerologists claim to be able to determine a person's character traits based on the "numeric value" of a name. The value of a name is determined 
#  by summing up the values of the letters of the name, where "a" is 1, "b" is 2, "c" is 3, and so on up to "z" being 26. For example, 
#  the name "Python" would have the value 16 + 25 + 20 + 8 + 15 + 14 = 98. Write a program that calculates the numeric value of a name provided as input.   

def name_sum():
  name=input("Enter the name=")
  sum=0
  for letter in name.lower():
    print(letter,"=",ord(letter)-96)
    sum+=ord(letter)-96
    print("letter's sum=",sum)

name_sum()
