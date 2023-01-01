#Code by Bhavy Kharbanda 

name = input("Enter a string : ").casefold()
str = ''
for char in name:
    if char not in str:
        print(char.upper(), '-', name.count(char))
        str = str+char

