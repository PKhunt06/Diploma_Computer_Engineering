# P-6-C Write a program that counts the occurrences of each digit in a string. The program counts how many times a digit appears in the string. For
#  example, if the input is "12203AB3", then the output should output 0 (1 time), 1 (1 time), 2 (2 times), 3 (2 times).

n = input("Enter number : ")
for i in range(10):
  count = n.count(str(i))
  print(f"{i}number-{count}time ")
