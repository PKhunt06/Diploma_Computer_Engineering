# P-6-B Write a program to read n numbers from a user and print:
# Number of positive numbers.
# Number of negative numbers.
# Number of zeros.
# Number of odd numbers.
# Number of even numbers.
# Average of all numbers.

def number():
    n = int(input("Enter the number of values = "))
    pos_count = 0
    neg_count = 0
    zero_count = 0
    odd_count = 0
    even_count = 0
    total_sum = 0

    for i in range(n):
        num = float(input("Enter the number = "))
        total_sum += num
        if num > 0:
            pos_count += 1
        elif num < 0:
            neg_count += 1
        else:
            zero_count += 1


        if int(num) % 2 == 0:
            even_count += 1
        else:
            odd_count += 1


    avg = total_sum / n


    print("Total Positive numbers = ", pos_count)
    print("Total Negative numbers = ", neg_count)
    print("Total Zeros = ", zero_count)
    print("Total Odd numbers = ", odd_count)
    print("Total Even numbers = ", even_count)
    print("Total Average = ", avg)


number()
