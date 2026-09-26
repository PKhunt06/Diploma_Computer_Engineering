# P-8-E Write a program that defines a function to find the GCD of two numbers using the algorithm below. The greatest common divisor (GCD) of two values 
#  can be computed using Euclid's algorithm. Starting with the values m and n, we repeatedly apply the formula: n, m = m, n%m until m is 0. At that point, 
#  n is the GCD of the original m and n (Use Recursion).

m = int(input("Enter the first number: "))
n = int(input("Enter the second number: "))

def gcd(m, n):
    if n == 0:
        return m
    return gcd(n, m % n)

print(f"The GCD of {m} and {n} is {gcd(m, n)}")
