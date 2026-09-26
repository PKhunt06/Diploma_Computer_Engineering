# P-9-A Write a program that defines functions (mean and deviation) that computes the mean and standard deviation of given numbers. 
#  The formula for the mean and standard deviation of $n$ numbers is given as:
#  mean = sigma xi = x1 + x2 + ... + xn / n
#  deviation = underroot sigma i=1 (xi - mean)^2 / n-1

def mean(number):
  return sum(number)/len(number)

def deviation(number):
  mean_val = mean(number)
  variances = [(x - mean_val)**2 for x in number]
  return(sum(variances)/(len(number)-1))**0.5

number = [1,2,3,4,5]

mean_val = mean(number)
dev_val = deviation(number)

print('Standard Mean of the given number is ',mean_val)
print('Standard Deviation of the given number is ',dev_val)
