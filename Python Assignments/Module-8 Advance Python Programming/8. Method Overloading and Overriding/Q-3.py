# Write a Python program to show method overloading.

class A:
    def display(self):
        print("A class is here")
    
    def display(self,num1):
        self.num1 = num1
        print("num1 = ",self.num1)

obj = A()

# if we will call display() method it will send an error
# obj.display()
obj.display(10)