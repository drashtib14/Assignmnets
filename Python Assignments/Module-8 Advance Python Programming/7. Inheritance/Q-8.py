# Write a Python program to demonstrate the use of super() in inheritance.

# base class
class A:
    def __init__(self,num1,num2):
        self.num1 = num1
        self.num2 = num2

    def displayA(self):
        print("\nA CLASS MEHTOD")
        print("num1 =  ",self.num1)
        print("num2 =  ",self.num2)

# derived class
class B(A):
    def __init__(self,num1,num2,num3):
        super().__init__(num1,num2)
        self.num3 = num3

    def display(self):
        print("\nB CLASS METHOD")
        print("num1 =  ",self.num1)
        print("num2 =  ",self.num2)
        print("num3 = ",self.num3)

# taking input from user
n1 = int(input("Enter number 1: "))
n2 = int(input("Enter number 2: "))
n3 = int(input("Enter number 3: "))

b = B(n1,n2,n3)

# b.displayA()
b.display()