# Write a Python program to show method overriding.

class A:
    # superclass method
    def display(self):
        print("A class display method is here")

class B(A):
    # taking same name method as it's superclass
    def display(self):
        print("B class display method is here")

# creating object
obj = B()
obj.display()