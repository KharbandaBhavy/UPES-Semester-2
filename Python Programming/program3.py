# Q3. WAP to read an integer from STDIN. Without using any string methods, print the following on a single line: 123.....n

n = int(input("Enter a number: "))
i=1
for i in range(n):
    print(i+1,end=" ")