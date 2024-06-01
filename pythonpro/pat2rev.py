n=int(input("enter the n"))

for i in range(0,n,1):
    for j in range(n,i,-1):
        print("*",end=" ")
    print()