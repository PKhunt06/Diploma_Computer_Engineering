# P-4-D Write a program to read the marks and assign a grade to a student. Grading system: A (>=90), B (80-89), C (70-79), D (60-69), E (50-59), F (<50). (Use if-elif-else)

Marks = float(input("Enter your Marks:- "))

if(Marks>=90):
  print("Your grade is A")
elif(Marks>80 and Marks<89):
  print("Your grade is B")
elif(Marks>70 and Marks<79):
  print("Your grade is C")
elif(Marks>60 and Marks<69):
  print("Your grade is D")
elif(Marks>50 and Marks<59):
  print("Your grade is E")
else:
  print("Your grade is F")
