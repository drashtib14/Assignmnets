# Write a Python program to show hierarchical inheritance.

class A:
    # creating methods
    def userInput(self):
        self.num1 = int(input("Enter number 1: "))
        self.num2 = int(input("Enter number 2: "))

class B(A):
    def addition(self):
        print(f"addition:  {self.num1} + {self.num2} = {self.num1 + self.num2}")

class C(A):
    def multiplication(self):
        print(f"Multiplication:  {self.num1} * {self.num2} = {self.num1 * self.num2}")

# object creation of B class
b = B()
c = C()

b.userInput() # accessing method of parent A class

# Share attributes between b and c
c.num1 = b.num1
c.num2 = b.num2

b.addition()
c.multiplication()