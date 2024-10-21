#  get the Fibonacci series of given range

n = int(input("Enter a range. Range should be minimun 3: ")) # taking input from user

num1 = 0 # defining num1 by 0
num2 = 1 # defining num2 by 1


if n >= 3 : # to get fibonacci series value (minimun value required)
    print(num1, num2, end=" ") # displaying value of num1 and num2
    for i in range(2,n) : # looping: starting from 2 and ending user entered num
        num3 = num1 + num2 # adding both numbers and storing in variable num3
        print(num3,end=" ") # then printing the value of num2
        num1 = num2 # storing val of num2 in num1
        num2 = num3 # storing val of num3 in num2
else : # if n is less than 3 then else part will be executed
    print("Please enter a number greather than 2")