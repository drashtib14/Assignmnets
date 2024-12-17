# Write a Python program to show multi-level inheritance.

# base class
class A: # grandparent
    # methods
    def displayA(self):
        print("A class is here")

# derived class
class B(A): # parent
    # methods
    def displayB(self):
        print("B class is here")

# derived class
class C(B): # child
    # methods
    def displayC(self):
        print("C class is here")

# creating object of class C only
c = C()

# calling methods using object
c.displayA()
c.displayB()
c.displayC()