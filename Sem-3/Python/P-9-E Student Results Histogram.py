# P-9-E Write a program to create a list representing the results of 100 students in a test, where each element represents a student's marks (between 0 to 10), 
#  and display a histogram for the result.

import matplotlib.pyplot as plt
import random

def generate_test_results(num_students=100):
    return [random.randint(0, 10) for _ in range(num_students)]

results = generate_test_results()
plt.hist(results, bins=11, edgecolor='black', alpha=0.7)
plt.title('Test Results Histogram')
plt.xlabel('Marks')
plt.ylabel('Number of Students')
plt.xticks(range(11))
plt.grid(axis='y')
plt.show()
