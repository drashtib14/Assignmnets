# get the Factorial number of given number

n = int(input("Enter a Number to find Factorial: "))

fact = 1
for i in range(n,1,-1) :
    fact = fact * i

print(f"Factorial of {n} is: {fact}")