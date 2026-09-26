# P-7-D Write a program that is given a dictionary containing the average daily temperature for each day of the week, and prints all the days on which 
# the average temperature was between 40 and 50 degrees.

temperature_d = {'Monday': 45,'Tuesday': 55,'Wednesday': 42,'Thursday': 38,
                    'Friday': 49,'Saturday': 51,'Sunday': 47}

min_temp = 40
max_temp = 50

for day, temperature in temperature_d.items():
    if min_temp <= temperature <= max_temp:
        print(day)
