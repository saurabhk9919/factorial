# Pattern F
rows=7
cols=5

for i in range(rows):
    for j in range(cols):
        if j== 0 or (i==0 and j<cols)or(i== rows // 2 and j<cols-1):
            print("*", end="")
        else:
            print(" ", end="")
    print()