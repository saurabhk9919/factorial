height = 7 
for row in range(height):
    for col in range(height):
        if col == 0 or col == height - 1 or (row == col and col <= height // 2) or (col == height - row - 1 and col > height // 2):
            print("*", end="")
        else:
            print(" ", end="")
    print()
