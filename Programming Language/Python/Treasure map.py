row1 = ["??必","??必","??必"]
row2 = ["??必","??必","??必"]
row3 = ["??必","??必","??必"]

treasure = input("Enter row and col: ").split(" ")
col = int(treasure[0])
row = int(treasure[1])

list = [row1,row2,row3]
list[row-1][col-1] = "X"
print(f"{row1}\n{row2}\n{row3}")

