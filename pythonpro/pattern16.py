height = 7

for row in range(height):
    if row == height // 2:
        print("*   *")
    elif row < height // 2:
        print("*" + " " * (height - row - 2) + "*")
    else:
        print("*" + " " * (row - height // 2 - 1) + "*")
