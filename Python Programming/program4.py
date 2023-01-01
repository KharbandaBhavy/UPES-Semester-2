# Code by Bhavy Kharbanda
N = int(input("Enter number of students : "))
print("Enter the names and marks : ")
results= {}
for i in range(N):
    a = input().split(' ')
    results[a[0]] = [float(x) for x in a[1:]]
student = input("Enter the name of student : ")
print (sum(results[student])/len(results[student]))


