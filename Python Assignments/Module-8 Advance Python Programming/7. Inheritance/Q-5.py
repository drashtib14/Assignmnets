# Write a Python program to show multiple inheritance.

class A:
    # creating methods
    def displayA(self):
        print("A class method")
class B:
    def displayB(self):
        print("B class method")

class C(A,B):
    def displayC(self):
        print("C class method")

# creating object of class C
c = C()

c.displayA()
c.displayB()
c.displayC()