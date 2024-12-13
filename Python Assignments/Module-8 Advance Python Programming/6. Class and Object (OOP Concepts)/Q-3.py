# Write a Python program to create a class and access its properties using an object.

class Student:
    # constructor to initialize properties
    def __init__(self, name, age, subject):
        self.name = name
        self.age = age
        self.subject = subject 
    
    # method to display student details
    def display_info(self):
        return f"Name: {self.name}, Age: {self.age}, Subject: {self.subject}"


student1 = Student("Alice",20,"python")

print(student1.name)
print(student1.age)
print(student1.subject) 

print(student1.display_info())