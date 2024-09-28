#  get the Fibonacci series of given range

n = int(input("Enter a range. Range should be minimun 3: "))

num1 = 0
num2 = 1


if n >= 3 :
    print(num1, num2, end=" ")
    for i in range(2,n) :
        num3 = num1 + num2
        print(num3,end=" ")
        num1 = num2
        num2 = num3
else :
    print("Please enter a number greather than 2")