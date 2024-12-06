for i in range(5):
    for j in range(5):
        if (i == j and i < 3) or (i + j == 4 and i < 3) or (j == 2 and i >= 3):
            print("*", end="")
        else:
            print(" ", end="")
    print()