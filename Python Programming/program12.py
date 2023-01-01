# Code by Bhavy Kharbanda

def Tuples(ls):
    Tmax = max(ls, key = lambda item:item[1])[1]
    Tmin = min(ls, key = lambda item:item[1])[1]
    return (Tmax, Tmin)

ls = [('V', 62), ('VI', 68), ('VII', 72), ('VIII', 70), ('IX', 74), ('X', 65)]
print("Original list of tuples: ")
print(ls)
print("Maximum and Minimum values from list of Tuples: ")
print(Tuples(ls))

