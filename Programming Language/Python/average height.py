
height = input("Enter heights separated by commas(,)\n").split(",")
total_heigth = 0
for h in range(0,len(height),1):
    total_heigth += int(height[h])

print(total_heigth//len(height))
