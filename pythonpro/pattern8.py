def print_n_pattern(size):
    size = 7
    for row in range(size):
        for col in range(size):
            if col == 0 or col == size - 1 or col == row:
                print("*", end="")
            else:
                print(" ", end="")
        print()
    for row in range(size):
        for col in range(size):
            if col == 0 or col == size - 1 or col == row:
                print("*", end="")
            else:
                print(" ", end="")
        print()
size = 7
print_n_pattern(size)