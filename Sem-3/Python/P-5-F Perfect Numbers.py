# P-5-F A positive integer is called a perfect number if it is equal to the sum of all of its positive divisors, excluding itself. For example, 6 is the first perfect
#  number, because 6 = 3 + 2 + 1, the next is 28 = 14 + 7 + 4 + 2 + 1. There are four perfect numbers that are less than 10,000. Write a program to find these four numbers.

def is_perfect(number):
  total = 0
  for divisor in range(1,number):
    if number % divisor == 0:
      total += divisor
  return total == number

for num in range(1,10001):
  if is_perfect(num):
    print(num)
