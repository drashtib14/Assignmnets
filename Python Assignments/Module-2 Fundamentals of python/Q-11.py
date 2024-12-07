# count the number of characters (character frequency) in a string

text = input("Enter a string: ")

frequency = {} # dictionary to store frequency

for char in text: # looping through each char in text
    if char in frequency: # check if the char is already present or not
        frequency[char] += 1
    else:
        frequency[char] = 1

# looping to print result
for char, count in frequency.items():
    print(f"Character: '{char}' appears {count} times.")