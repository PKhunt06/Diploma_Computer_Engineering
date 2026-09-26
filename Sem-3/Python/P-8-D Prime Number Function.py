# P-8-D Write a program that defines a function to determine whether input number n is prime or not. A positive whole number n > 2 is prime, 
#  if no number between 2 and n (inclusive) evenly divides n. If n is not prime, the program should quit as soon as it finds a value that evenly divides n.

import math

def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False

    for i in range(5, int(math.sqrt(n)) + 1, 6):
        if n % i == 0 or n % (i + 2) == 0:
            return False
    return True

if __name__ == "__main__":
    n = int(input("Enter a positive integer greater than 2: "))

    if n > 2:
        if is_prime(n):
            print(f"{n} is a prime number.")
        else:
            print(f"{n} is not a prime number.")
    else:
        print("Please enter a number greater than 2.")
