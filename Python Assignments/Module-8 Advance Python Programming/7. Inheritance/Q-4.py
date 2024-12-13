# Write a Python program to show multi-level inheritance.

class A: # grandparent
    def displayA(self):
        print("A class is here")

class B(A): # parent
    def displayB(self):
        print("B class is here")

class C(B): # child
    def displayC(self):
        print("C class is here")

# creating object of class C only
c = C()
c.displayA()
c.displayB()
c.displayC()