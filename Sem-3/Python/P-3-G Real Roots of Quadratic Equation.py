# P-3-G Write a program that computes the real roots of a given quadratic equation (Use math library).
#  Discriminant = b² - 4ac
#  Real Roots = -b +- underroot b^2 - 4ac / 2a

import math

def equationroot(a,b,c):
  i = 0
  dis = b * b - 4 * a * c
  sqrt_val = math.sqrt(abs(dis))

  if dis > 0:
    print("real and different roots")

    print((-b - sqrt_val)/(2*a))
  elif dis == 0:
    print("real and same roots")
    print(-b/(2*a))
  else:
    print("Complex roots")
    print(- b / (2 * a), "+ i", sqrt_val / (2 * a))
    print(- b / (2 * a), "- i", sqrt_val / (2 * a))

a = int(input("Enter value of A: "))
b = int(input("Enter value of B: "))
c = int(input("Enter value of C: "))

if a == 0:
  print("Input correct quadratic equation")
else:
  equationroot(a,b,c)
