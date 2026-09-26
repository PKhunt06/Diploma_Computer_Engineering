# P-3-D Write a program to get change values in Quarter, Dime, Nickels and Pennies, and calculate the value of change in Dollars. Consider Quarter = 0.25 $,
#  Dime = 0.10 $, Nickels = 0.05 $ and Penny = 0.01 $.

Quarter = int(input("Enter the vlaue of Quaters:-"))
Dime    = int(input("Enter the value of Dimes:-"))
Nickels = int(input("Enter the value of Nickels:-"))
Penny   = int(input("Enter the value of Penny:-"))

Total = Quarter * 0.25 + Dime * 0.10 + Nickels * 0.05 + Penny * 0.01
print("Total value of change in dollar :-",Total)
