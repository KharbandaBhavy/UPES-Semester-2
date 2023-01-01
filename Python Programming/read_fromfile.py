outf = open('myfile.txt', 'w')
outf.write('hello file\n')
outf.close()

inf = open('myfile.txt', 'r')
for l in inf:
    print(l)
inf.close()
