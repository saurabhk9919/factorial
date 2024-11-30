rows = 7
for i in range(rows):
    for j in range(rows):
        if j == 0 or j == rows - 1 or i == j:
            print("*", end="")
        else:
            print(" ", end="")
    print()