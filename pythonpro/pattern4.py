rows = 5  # Number of rows for the triangle
for i in range(1, rows + 1):
    for j in range(1, rows - i + 1):
        print(" ", end="")
    for k in range(1, 2 * i):
        if k == 1 or k == 2 * i - 1 or i == rows:
            print("*", end="")
        else:
            print(" ", end="")
    print()