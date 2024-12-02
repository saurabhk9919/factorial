rows = 5

for i in range(rows):
    for j in range(rows):
        if i == 0 or j == rows // 2:
            print("*", end="")
        else:
            print(" ", end="")
    print()