# Write a Python program to match a word in a string using re.match().

import re

main_string = "Hello World, Welcome to Python!"
find_str = "hello"

# match for 'Hello' at the beginning of the string
result = re.match(find_str,main_string,re.IGNORECASE)

if result:
    print(result)
    print("Match found:", result.group())
else:
    print("No match found.")
    

# match for 'World' in main_string
find_str2 = "World"
print(re.match(find_str2,main_string,re.IGNORECASE)) # returns None because no value was found at the start of the string