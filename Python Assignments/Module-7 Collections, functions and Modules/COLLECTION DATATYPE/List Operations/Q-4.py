# Write a Python program to remove elements from a list using pop() and remove().

# remove()
fruits = ['apple', 'banana', 'cherry', 'banana']

fruits.remove("banana") # specify element to remove
print(fruits) # Output: ['apple', 'cherry', 'banana']

# pop()
fruits1 = ['apple', 'banana', 'cherry']

popped_element = fruits1.pop(1)
print(fruits1)         # Output: ['apple', 'cherry']
print(popped_element) # Output: 'banana'