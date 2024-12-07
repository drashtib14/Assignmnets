# function to insert a string in the middle of a string

original_string = input("Enter the original string: ") # input original string

string_to_insert = input("Enter the string to insert: ") # input string to insert

# finding the middle index of the original string
middle_index = len(original_string) // 2

# insert the string at the middle index
result = original_string[:middle_index] + string_to_insert + original_string[middle_index:]

# printing the result
print("Resulting string:", result)