n = int(input("Enter the number of students : "))
score = list(map(int, input("Enter the scores : ").split()))
for i in range (n):
    score.sort()
print("Marks entered : ", score)
print("Score of Runner up is : ", score[-2])


