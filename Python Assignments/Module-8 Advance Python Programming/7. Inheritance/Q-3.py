# Write a Python program to show single inheritance.

# base class
class A:
    # A class method
    def displayA(self):
        print("A class is here")

# derived class
class B(A):
    # B class method
    def displayB(self):
        print("B class is here")

b = B()

b.displayA()
b.displayB()