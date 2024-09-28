# swap two number with temp variable and without temp variable

# using temp variable

print("using temp variable: ")
num1 = int(input("Enter value of num1: "))
num2 = int(input("Enter value of num2: "))

print(f"\nBefore swapping the value of num1 is {num1} and num2 is {num2}")

num3 = num1
num1 = num2
num2 = num3

print(f"After swapping the value of num1 is {num1} and num2 is {num2}")


# without using temp variable

print("\nWithout using temp variable")
no1 = int(input("Enter value of num1: "))
no2 = int(input("Enter value of num2: "))

print(f"\nBefore swapping the value of num1 is {no1} and num2 is {no2}")

no2 = no1 + no2
no1 = no2 - no1
no2 = no2 - no1

print(f"After swapping the value of num1 is {no1} and num2 is {no2}")