# Write a Python program to handle file exceptions and use the finally block for closing the file.

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
finally:
    print("Thank You for using this program!")