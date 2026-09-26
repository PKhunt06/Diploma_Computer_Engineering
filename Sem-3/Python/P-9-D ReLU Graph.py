# P-9-D Write a program to display a graph for the ReLU (Rectified Linear Unit) function. The ReLU function is defined as below:
#  y = max (0,x)
#  Consider the range of $x$ from -5 to 5.

import matplotlib.pyplot as plt
import numpy as np

def relu(x):
    return np.maximum(0, x)

x = np.linspace(-5, 5, 100)
y = relu(x)

plt.plot(x, y)
plt.title('ReLU Function')
plt.xlabel('x')
plt.ylabel('ReLU(x)')
plt.grid()
plt.axhline(0, color='black', lw=0.5, ls='--')
plt.axvline(0, color='black', lw=0.5, ls='--')
plt.show()
