# Write a Python program to demonstrate handling multiple exceptions.

def handlingException():
     # taking input
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    # performing division
    result = num1 / num2

    print(f"The result of division is: {result}")

# handling multiple exceptions
try:
    handlingException()
except (ValueError, ZeroDivisionError) as e:
    print("Invalid input. Try again")
    print("Error: ",e)