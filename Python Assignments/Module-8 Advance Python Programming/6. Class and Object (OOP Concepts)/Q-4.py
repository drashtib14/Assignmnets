# Write a Python program to demonstrate the use of local and global variables in a class.

subject = "python"

class Student:
    def __init__(self,name,grade):
        self.name = name
        self.grade = grade

    def display(self):
        greeting = f"Welcome,{self.name}!"
        print(greeting)
        print(f"Grade: {self.grade}")
        print(f"Subject: {subject}") # accessing the global variable

    def change_subject(self, new_subject):
        # modifying the global variable inside a class method
        global subject
        subject = new_subject
        print(f"\nSubject name updated to: {subject}\n")

student1 = Student("Alice","A")
student1.display()

student1.change_subject("Java")
student1.display()