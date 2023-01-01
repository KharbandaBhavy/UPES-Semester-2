# Code by Bhavy Kharbanda
details = open("City", "r")
n = details.read()
print("Details of the cities are : ")
print(n)
details.close()
print("\n")

population = open("City", "r")
n = population.readlines()
population.close()
print("Cities with population more than 10 Lakh : ")
for i in n:
    i = i.split()
    if(int(i[1])>10):
        print(i[0])
print("\n")

sum = open("City", "r")
area = sum.readlines()
sum.close()
result = 0
for j in area:
    j = j.split()
    result = result + int(i[2])
print("Sum of area of all the cities : ", result)

