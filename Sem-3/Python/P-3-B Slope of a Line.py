# P-3-B Write a program to compute the slope of a line between two points (x1, y1) and (x2, y2).
#  Slope = y2-y1 / x2-x1

x1 =  int(input("Enter the coordinate value of x1             :- "))
x2 =  int(input("Enter the coordinate value of x2             :- "))
y1 =  int(input("Enter the coordinate value of y1             :- "))
y2 =  int(input("Enter the coordinate value of y2             :- "))

slope = (y2-y1)/(x2-x1)
midpoint_x = x1+x2/2
midpoint_y = y1+y2/2
print("slope of line :- ")
print(slope)
