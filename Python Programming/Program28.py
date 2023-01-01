# Code by Bhavy Kharbanda
def func(l):
    count = 0 
    for line in l:
        if line[0] == 'A':
            count += 1
    return count

f1 = open('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\myfile.txt', 'r')
l = f1.readlines()
print('\n Number of Lines starting with A : ', func(l))
print('\n')




