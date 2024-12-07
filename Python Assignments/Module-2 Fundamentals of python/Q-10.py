# calculate the length of a string

string = input("Enter a string: ")

# with using len function
print("Length of the string is: ",len(string)) # using len() to find length of string

#without using len function
count = 0 # initializing count by 0
for i in string : # letters of string will be in iteration
    count += 1 # adding val in count by 1
print("\nLength of the string is: ",count) # printing outside the loop