# function to reverses a string if its length is a multiple of 4

string = input("Enter a string: ")

# check if the length of the string is a multiple of 4
if len(string) % 4 == 0: # if condition is true then reverse the string
    reversed_string = string[::-1]
    print(f"Reversed string: {reversed_string}")
else:
    print("The length of the string is not a multiple of 4. Original string: ", string)