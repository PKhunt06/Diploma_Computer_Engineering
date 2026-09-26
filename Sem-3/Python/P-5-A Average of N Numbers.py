# P-5-A Write a program to read n numbers from users and calculate the average of those n numbers.

num = int(input('How many numbers:- '))
totalsum = 0
for n in range(num):
  numbers = float(input('Enter number:-'))
  totalsum += numbers
avg = totalsum/num
print('Average of',num,'numbers is:- ',avg)
