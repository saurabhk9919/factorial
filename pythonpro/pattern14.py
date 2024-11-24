height = 7 
width = height // 2 + 1

for row in range(height):
    if row == 0 or row == height // 2:
        
        print("*" * width)
    elif row < height // 2:
       
        print("*" + " " * (width - 2) + "*")
    else:
        
        print("*")
