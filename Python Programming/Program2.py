# WAP to read an integer ‘n’ from STDIN. For all non-negative integers i<n, print i2 on a separate line. 

n = int(input("Enter an integer: "))

if n<1:
    n=n*-1

for i in range(n):
    print(i ** 2)





