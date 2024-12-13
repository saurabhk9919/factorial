n = int(input("Enter the value of n: "))
a, b = 0, 1
print(a, b, end=" ")
for _ in range(n - 2):
    a, b = b, a + b
    print(b, end=" ")