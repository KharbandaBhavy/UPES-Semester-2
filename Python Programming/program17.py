# Code by Bhavy Kharbanda
list = [1,2,3,"4",5]
sum = 0
for i in list:
    try:
        sum = sum+i
    except TypeError as e:
        print("Error Message :", e)
print(sum)
try:
    print(list[5])
except IndexError as I:
    print("Error Message :", I)

