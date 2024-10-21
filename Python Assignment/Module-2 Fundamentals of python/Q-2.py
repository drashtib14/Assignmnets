# get the Factorial number of given number

n = int(input("Enter a Number to find Factorial: ")) # taking input from user

fact = 1 # defining fact by 1
for i in range(n,1,-1) : # loop will iterate in reverse order, so n is starting point and it will stop by 1
    fact = fact * i      # multiplying fact by i and storing in fact variable

print(f"Factorial of {n} is: {fact}") # printing final value of fact