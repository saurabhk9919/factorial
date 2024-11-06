rows = 5

for i in range(rows, 0, -1):
    for j in range(1, rows + 1):
        if j == rows or j == i or i == rows:
            print("*", end="")
        else:
            print(" ", end="")
    print()