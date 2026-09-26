# P-3-C Write a program to calculate simple and compound interest.
#  Simple Interest = P * R * T / 100
# Compound Interest = P * (1 + R/n ) ^ nt

p =  int(input("Enter the value of Principle :- "))
r =  int(input("Enter the value of Rate      :- "))
t =  int(input("Enter the value of Time      :- "))
n =  int(input("Enter the value of N         :- "))

Simpleinterest = p*r*t/100
print("Simple Interest is :- ",Simpleinterest)

CompoundInterest = p*(1+(r/100*n))*(n*t)
print("Compound Interest is:- ",CompoundInterest)
