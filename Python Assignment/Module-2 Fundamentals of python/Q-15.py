# add 'ing' at the end of a given string (length should be at least 3). If the given string already ends with 'ing' then add 'ly' instead if the string length of the given string is less than 3, leave it unchanged.

string = input("Enter a string: ")

length = len(string) # finding length of string

if length >= 3: # if len is 3 or greater than 3
    if string.endswith('ing'): # using endswith() and checking if the string endswith ing
        modified_string = string + 'ly' # if does then adding ly
    else: # otherwise add ing
        modified_string = string + 'ing'
else: # otherwise leave it unchanged
        modified_string = string

# printing result
print(f"Modified string: {modified_string}")