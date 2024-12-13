# Write a Python program to handle multiple exceptions (e.g., file not found, division by zero).


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
    filename = input("Enter a filename to open: ")
    file = open(filename, 'r')
except (ValueError, ZeroDivisionError, Exception) as e:
    print("Invalid input. Try again")
    print("Error: ",e)