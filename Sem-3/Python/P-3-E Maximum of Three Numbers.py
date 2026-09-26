# P-3-E Write a program to find a maximum of given three numbers (Use ternary operator).

def maximum(a,b,c):
  if(a>b and a>=c):
    largest = a
  elif(b>=a and b>=c):
     largest = b
  else:
    largest = c
    return largest

a = int(input("Enter value of A : "))
b = int(input("Enter value of B : "))
c = int(input("Enter value of C : "))

print("Maximum number is : ",maximum(a,b,c))
