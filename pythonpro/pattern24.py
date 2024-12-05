
rows = 7

for i in range(rows):
    for j in range(2 * rows - 1):
        
        if j == i or j == (2 * rows - 2 - i):
            print("*", end="")
        else:
            print(" ", end="")
    print()  
