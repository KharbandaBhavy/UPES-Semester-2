# Code by Bhavy Kharbanda
import numpy as np
#Part A
arr = np.array([1, 2.0, 3], dtype =str)
print(arr)
arr = np.array([1, 2.0, 3], dtype ="S")
print(arr)
#Part B
arr = np.array([[1,2,3],[4,5,6]], dtype ="int32")
print(arr)
#Part C
print("Rows and columns of the given matrix are : ", arr.shape)
#Part D
n = np.random.randint(low = 1, high = 100, size = 10)
print(n)



