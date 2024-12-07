# count occurrences of a substring in a string

string = input("Enter the string: ") # get the entire string
substring = input("Enter the substring to find: ") # get a word to find in the string

count = string.count(substring) # using count()
# print the result
print(f"The substring '{substring}' occurs {count} times in the string.")