# Code by Bhavy Kharbanda
n = int(input("Enter the number of Test Cases : "))
a =[]
for i in range(n):
    a.append(input().split())
for  j in range(len(a)):
    try:
        print (int(a[j][0])//int(a[j][1]))
    except ZeroDivisionError as e:
        print("Error Code:", e)
    except ValueError as f:
        print("Error Code:", f)


