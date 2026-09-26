# Extra-P-8 Find the factorial of a given number.

def factorial_iterative(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result
num = int(input("Enter a number to find its factorial: "))
print(f"Factorial of {num} (iterative): {factorial_iterative(num)}")
