# Code by Bhavy Kharbanda
import numpy as np
# Part A
print(np.info(np.add))

# Part B
n = []
a = int(input("Enter the size of array : "))
for i in range(a):
    x = int(input("Enter elements : "))
    n.append(x)
n = np.array(n)
print((n))
print(np.all(n))

# Part C
n = []
a = int(input("Enter the size of array : "))
for i in range(a):
    n.append(int(input("Enter elements of array : ")))
n = np.array(n)
print((n))
print(np.any(n))

# Part D
random = np.random.normal(0,1,15)
print("15 Random numbers from a Standard Normal Distribution are : ")
print(random)


