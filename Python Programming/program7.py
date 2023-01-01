s1 = input("Enter the first string :")
s2 = input("Enter the sub-string : ")
count = 0
for i in range(len(s1)):
    if s1[i:].startswith(s2):
        count = count +1
print("Number of times substring occurs in main string : ", count)

