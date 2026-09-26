# P-3-H Write a program to determine the length of ladder required to reach a given height when leaned against the house. The height and the angle of the 
#  ladder are given as inputs (Use math Library).

import math
height = float(input("Enter the height of wall : "))
angle = float(input("Enter the angle of ladder : "))
length = height / math.sin(math.radians(angle))
print(length)
