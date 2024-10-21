# count the occurrences of each word in a given sentence

string = input("Enter a string: ")

words = string.split() # spilting words

frequency = {} # taking a dictionary

for word in words: # looping words
    if word in frequency: # if word is already in frequency then increase word count by 1
        frequency[word] += 1
    else:
        frequency[word] = 1

# printing result
for word, count in frequency.items():
    print(f"Word: '{word}' appears {count} times.")