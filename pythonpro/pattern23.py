rows = 5
cols = 5
for i in range(rows):
    for j in range(cols):
        
        if i == 0 or j == cols // 2:
            print('*', end=' ')
        else:
            print(' ', end=' ')
    print()