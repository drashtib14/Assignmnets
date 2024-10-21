# swap two number with temp variable and without temp variable

# using temp variable

print("using temp variable: ")
num1 = int(input("Enter value of num1: "))
num2 = int(input("Enter value of num2: "))

print(f"\nBefore swapping the value of num1 is {num1} and num2 is {num2}") # displaying val of both variables before swapping

num3 = num1 # storing val of num1 in num3
num1 = num2 # storing val of num2 in num1
num2 = num3 # storing val of num3 in num2

print(f"After swapping the value of num1 is {num1} and num2 is {num2}") # printing after swapping


# without using temp variable

print("\nWithout using temp variable")
no1 = int(input("Enter value of num1: "))
no2 = int(input("Enter value of num2: "))

print(f"\nBefore swapping the value of num1 is {no1} and num2 is {no2}") # before swapping

no2 = no1 + no2 # addition of no1 and no2 then storing val in no2
no1 = no2 - no1 # subtraction of no1 from no2 then storing val in no1
no2 = no2 - no1 # subtraction of no1 from no2 then storing val in no2

print(f"After swapping the value of num1 is {no1} and num2 is {no2}") # after swapping