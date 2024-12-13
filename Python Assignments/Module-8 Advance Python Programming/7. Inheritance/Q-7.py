# Write a Python program to show hybrid inheritance.

# base class
class A:
    def displayA(self):
        print("Class A method")

# derived class. inherited class A
class B(A):
    def displayB(self):
        print("Class B method")

# derived class. inherited class B
class C(A):
    def displayC(self):
        print("Class C method")

# derived class. inherited class B and class C
class D(B,C):
    def displayD(self):
        print("Class D method")


# object created of class D
d = D()

d.displayA()
d.displayB()
d.displayC()
d.displayD()