score = input("Enter scores separated by commas(,)\n").split(",")

max = int(score[0])
for sc in score:
    if max<int(sc):
        max=int(sc)

print(sc)        