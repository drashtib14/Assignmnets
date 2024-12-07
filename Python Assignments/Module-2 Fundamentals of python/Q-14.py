# get a single string from two given strings, separated by a space and swap the first two characters of each string

# input two strings
string1 = input("Enter first string: ")
string2 = input("Enter second string: ")

# swapping the first two characters of each string
new_str1 = string2[:2] + string1[2:]  # first two chars of string2
new_str2 = string1[:2] + string2[2:]  # first two chars of string1

# space in between the string
swapped_string = new_str1 + ' ' + new_str2

# Print the result
print(f"\nResulting string after swapping: {swapped_string}")