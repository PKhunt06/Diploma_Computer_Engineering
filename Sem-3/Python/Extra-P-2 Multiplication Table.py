# Extra-P-2 Write a program to print multiplication table of a given number.

num = int(input("Enter a number: "))
print(f"Multiplication Table for {num}:")
for i in range(1, 11):
    print(f"{num} x {i} = {num * i}")
