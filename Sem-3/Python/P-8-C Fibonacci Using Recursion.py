# P-8-C Write a program to print Fibonacci sequence up to n numbers using recursion. Fibonacci sequence is defined as below: Fibonacci Sequence= 1 1 2 3 5 8 13 21...
#  where n^th term xn = xn-1 + xn-2

def fibonacci(n):

    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        seq = fibonacci(n - 1)
        seq.append(seq[-1] + seq[-2])
        return seq

def print_fibonacci_sequence(n):

    if n <= 0:
        print("Please enter a positive integer.")
    else:
        sequence = fibonacci(n)
        print("Fibonacci sequence up to", n, "numbers:")
        print(sequence)


n = int(input("Enter the number of Fibonacci numbers to be printed: "))
print_fibonacci_sequence(n)
