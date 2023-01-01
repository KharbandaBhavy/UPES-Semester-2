# Code by Bhavy Kharbanda

try:
    with open("File1", "r") as f:
        data = f.read()
        print(data)
except IOError as e:
    print("Error message : ", e)
try:
    with open('oup.txt', 'w') as g:
        g.write(data.replace('\"', '\\\"'))
except IOError as j:
    print("Error message : ", j)
try:
    with open ('File5', 'r') as n:
        ele = n.read()
        print(ele)
except IOError as r:
    print('Error Message : ', r)



