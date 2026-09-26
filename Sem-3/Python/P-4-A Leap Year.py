# P-4-A A year is a Leap year if it is divisible by 4, unless it is a century year that is not divisible by 400 (1800 and 1900 are not leap years, 1600 and 2000 are leap
#  years). Write a program that calculates whether a given year is a leap year or not.

year = int(input("Enter a year :- "))
if(year % 4) == 0:
  if(year % 400) == 0:
    print(format(year),"is a leap year")
  else:
    print(format(year),"is not a leap year")
else:
  if(year % 100) == 0:
    print(format(year),"is a leap year")
  else:
    print(format(year),"is not a leap year")
