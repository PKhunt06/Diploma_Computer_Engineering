# P-4-C The Body Mass Index (BMI) is calculated as a person's weight (in kg), divided by the square of the person's height (in meters). If the BMI is
#  between 19 and 25, the person is healthy. If the BMI is below 19, then the person is underweight.If the BMI is above 25, then the person is overweight.
#  Write a program to get a person's weight (in kgs) and height (in cms) and display a message whether the person is healthy, underweight or overweight.
#  BMI = Weight in Kg / (height in m)^2

weight = float(input("Enter the weight in kg :- "))
height = float(input("Enter the height in meter :- "))

BMI = weight/(height * height);
print("Your BMI is ",BMI)
if BMI<19:
  print("Underweight")
elif BMI>=19 and BMI<=25:
  print("Healthy")
elif BMI>=25:
      print("Overweight")
