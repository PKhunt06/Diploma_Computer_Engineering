# P-3-F Write a program to calculate area and volume of Sphere.
#  Area of Sphere = 4 πr ^ 2
#  Volume of Sphere = 4/3 πr ^ 3

r = int (input("Enter value of radius : "))
pi = 3.14

Area = 4*pi*r*r
Volume = (4/3)*pi*r*r

print("Area of sphere is : ",Area)
print("Volume of sphere is : ",Volume)
