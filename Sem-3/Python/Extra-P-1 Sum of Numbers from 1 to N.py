# Extra-P-1 Calculate the sum of all numbers from 1 to a given number.

n = int(input("Enter a positive integer: "))
if n < 1:
    print("Please enter a positive integer.")
else:
    print(f"The sum of all numbers from 1 to {n} is: {sum(range(1, n + 1))}")
