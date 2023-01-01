#Code by Bhavy Kharbanda

def sum_numbers(num):
    if(num==0):
        return (num)
    else:
        return (num*(num+1)/2)

n = int(input("Enter a number : "))
sum = sum_numbers(n)
print("Sum of natural numbers is : ", int(sum))

def fibonacci(n):
    if(n<=1):
        return(n)
    else:
        return(fibonacci(n-1)+ fibonacci(n-2))
element = int(input("Enter the range : "))
print("Fibonacci series is : ")
for i in range (element):
    print(fibonacci(i))


