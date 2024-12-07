# sum of three given integers. However, if two values are equal sum will be zero

# asking user to enter 3 values
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))

# if num1 is equal to num2 or num3 or num2 is equal to num3 then result will be defined by 0
if num1 == num2 or num1 == num3 or num2 == num3 :
    result = 0
else : # else addition of 3 numbers
    result = num1 + num2 + num3

print(f"Sum of three numbers is: {result}")