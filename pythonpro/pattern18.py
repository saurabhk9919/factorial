
height = 5
width = 5

for row in range(height):
    for col in range(width):
        if col == 0 or col == width - 1 or (row == col and col <= width // 2) or (row + col == width - 1 and col >= width // 2):
            print("*", end="")
        else:
            print(" ", end="")
    print()