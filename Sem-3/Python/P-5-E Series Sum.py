# P-5-E Write a program to sum the following series:
# 1/3 + 3/5 + 5/7 + 7/9 + 9/11 + ... + 95/97 + 97/99

def frac_series():
  num = 1
  denom = 3
  sum = 0
  for i in range(1,100,2):
    sum += num/denom
    num += 2
    denom += 2


  print(sum)

frac_series()
