# Write a Python program to insert elements into an empty list using a for loop and append().

numbers = []

num_elements = int(input("Enter the number of elements to add to the list: "))

for i in range(num_elements):
    num = int(input(f"Enter number {i+1}: "))
    numbers.append(num)
print("\nList after inserting elements: ",numbers)