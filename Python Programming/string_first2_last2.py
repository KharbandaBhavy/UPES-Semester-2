string=input("Enter string:")
n=0
for i in string:
      n=n+1
new=string[0:2]+string[n-2:n]
print("New string is:")
print(new)