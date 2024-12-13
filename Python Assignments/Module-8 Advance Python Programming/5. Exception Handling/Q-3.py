# Write a Python program to handle exceptions in a simple calculator (division by zero, invalid input).

def simple_calc(n1,n2,op):
    # performing math operations
    if operator == '+':
        return n1 + n2
    elif operator == '-':
        return n1 - n2
    elif operator == '*':
        return n1 * n2
    elif operator == '/':
        return n1 / n2
    else:
        print("Invalid choice")

# exception handling
try:
    # getting input from user
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
    operator = input("Enter an operator(+, -, *, /): ")
    print("Result: ",simple_calc(num1,num2,operator))
# custom exceptions
except ValueError:
    print("Invalid input")
except ZeroDivisionError:
    print("Cannot Divide by Zero")
finally:
        print("Thank you for using the calculator!")