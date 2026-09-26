# P-9-F Create a user-defined module with simple functions for: addition, subtraction, multiplication, division, modulo, square, and factorial. 
#  Write a program to import the module and access functions defined in the module.

import math
import operator

num1, num2, num3 = 5, 2, 4

operations = {
    '+': operator.add,
    '-': operator.sub,
    '*': operator.mul,
    '/': operator.truediv,
    '%': operator.mod,
}

for op, func in operations.items():
    try:
        print(f"{num1} {op} {num2} = {func(num1, num2)}")
    except ZeroDivisionError:
        print(f"Cannot divide by zero")

print(f"Square of {num3} = {num3 ** 2}")
print(f"Factorial of {num3} = {math.factorial(num3)}")
