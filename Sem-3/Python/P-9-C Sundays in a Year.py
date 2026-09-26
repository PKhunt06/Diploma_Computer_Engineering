# P-9-C Write a program to print the dates of all the Sundays in a given year.

import datetime

def print_sundays(year):
    for month in range(1, 13):
        for day in range(1, 32):
            try:
                date = datetime.date(year, month, day)
                if date.weekday() == 6:
                    print(date)
            except ValueError:
                continue
print_sundays(2024)
