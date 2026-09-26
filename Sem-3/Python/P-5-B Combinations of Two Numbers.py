#  P-5-B Write a program that prompts the user to enter 10 integers and displays all the combinations of picking two numbers from the 10.

from itertools import combinations

numbers=[0,1,2,3,4,5,6,7,8,9]

combinations_list = list(combinations(numbers,2))
print("All combinations of two numbers:- ")
for combination in combinations_list:
  print(combination)
