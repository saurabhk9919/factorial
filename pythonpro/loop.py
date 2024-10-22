# for num in range(1,6,2):
#     print(num)
# for i in range(1,9):
#     print(i,end=" ")
# print('End of the knk')
# a="Hello"
# b="Wprld@@"
# print(a,b,sep=",")
# print("Saurabh","SDE",sep=",")
# for i in range(1,7,1):
#     print(i)
# for a in range(16,6,-1):
#     print("The reverse is",a)
# sum_numbers = 0
# for num in range(1,11,2):#printing sum of even numbers 0 to 11
#      print(num)
#      sum_numbers += num
# print("Sum of numbers from 0 to 10 is:", sum_numbers)
   
# sum_numbers = 0
# for num in range(11,0,-2):#printing sum of even numbers 0 to 11
#      print(num)
#      sum_numbers += num
# print("Sum of numbers from 0 to 10 is:", sum_numbers)

# for i in range(1,6):
#     print(i*i)
sum=0
for i in range(1,20):
    if(i%2!=0) and (i%3!=0) and (i%5!=0): 
        sum=sum+i
        print(sum)