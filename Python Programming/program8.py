#code by Bhavy Kharbanda

def name(n):
    l = n.split()
    new = ""
    for i in range(len(l)-1):
        n = l[i]
        new += (n[0].upper()+'.')
    new +=l[-1].title()
    return new
n = input("Enter the string : ")
print(name(n))



