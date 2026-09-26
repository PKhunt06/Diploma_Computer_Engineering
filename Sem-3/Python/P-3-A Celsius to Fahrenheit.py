# P-3-A Write a program to convert temperature from elsius to Fahrenheit. Equation to convert Celsius to Fahrenheit:
#  F = (9/5) * C + 32

c = float(input("Enter a Temprature in celcius  :- "))
f = float(input("Enter a Temprature in Farenheit :- "))

print("Temprature in C to F is :- ",(c*9/5)+ 32)
print("Temprature in F to C is :- ",(f-32)*5/9 )
