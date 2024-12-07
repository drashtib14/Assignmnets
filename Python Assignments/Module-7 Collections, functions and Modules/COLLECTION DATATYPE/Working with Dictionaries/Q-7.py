# Write a Python program to count how many times each character appears in a string

frequency = {} # taking a dictionary

word = "hello" # string word

# looping through each character in word var
for char in word:
    if char in frequency: # if char already exists then add +1 in value
        frequency[char] += 1
    else: # if not then let it be 1
        frequency[char] = 1

print(frequency) # Output: {'h': 1, 'e': 1, 'l': 2, 'o': 1}