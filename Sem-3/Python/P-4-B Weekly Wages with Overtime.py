# P-4-B Many companies pay time and a half for any hours worked above 40 hours in a given week. Write a program to input the number of hours worked and
#  hourly rate and calculate the total wages for the week.

hours_worked = float(input("Enter the number of hours worked: "))
hourly_rate = float(input("Enter the hourly rate: "))

if hours_worked > 40:
    regular_hours = 40
    overtime_hours = hours_worked - 40
    regular_pay = regular_hours * hourly_rate
    overtime_pay = overtime_hours * hourly_rate * 1.5
    total_wages = regular_pay + overtime_pay
else:
    total_wages = hours_worked * hourly_rate

print("Total wages of the week: ", total_wages)
