# Code by Bhavy Kharbanda

str = ""
s1 = ""
with open("File1", "r") as nf:
    str = nf.readline()
    for i in range (0, len(str)):
        if str[i] == '"':
            s1 = s1+'\\'+str[i]
        else:
            s1 = s1+str[i]
print(str)
nf.close()
with open ("File2", "w") as nf:
    nf.write(s1)
    print(nf.readline)
nf.close



