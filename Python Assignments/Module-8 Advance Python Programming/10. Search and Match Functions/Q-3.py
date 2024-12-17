# Write a Python program to search for a word in a string using re.search().

import re

main_string = "Hello World, Welcome to Python!"
find_str = "Python"

# search for 'Python' anywhere in the string
result = re.search(find_str,main_string,re.IGNORECASE)

if result:
    print(result)
    print("Match found:", result.group())
else:
    print("No match found.")