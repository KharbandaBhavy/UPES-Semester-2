# Code by Bhavy Kharbanda

f = open("File3", "r")
str = f.read()
f.close()
word = str.split()
print("Total number of words : ", len(word))
count = {}
for i in word:
    i = i.lower()
    if i in count:
        count[i] = count[i]+1
    else:
        count[i] = 1
for key in list(count.keys()):
    ele = print(key, ":", count[key])

    