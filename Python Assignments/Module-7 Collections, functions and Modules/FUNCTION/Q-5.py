# Write a Python program to create a calculator using functions

# function without parameter and without return type
def add():
    num1 = int(input("Enter Number 1: "))
    num2 = int(input("Enter Number 2: "))
    ans = num1 + num2
    print(ans)

def sub():
    num1 = int(input("Enter Number 1: "))
    num2 = int(input("Enter Number 2: "))
    ans = num1 - num2
    print(ans)

def mul():
    num1 = int(input("Enter Number 1: "))
    num2 = int(input("Enter Number 2: "))
    ans = num1 * num2
    print(ans)

def div():
    num1 = int(input("Enter Number 1: "))
    num2 = int(input("Enter Number 2: "))
    ans = num1 / num2
    print(ans)

menu = """
                Menu
        press 1 for addition
        press 2 for subtraction
        press 3 for multiplication
        press 4 for division
"""

print(menu)
choice = int(input("Enter Your Choice: "))

if choice == 1:
    add()
elif choice == 2:
    sub()
elif choice == 3:
    mul()
elif choice == 4:
    div()
else:
    print("Invalid input")