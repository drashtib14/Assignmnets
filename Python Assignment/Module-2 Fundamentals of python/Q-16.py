# find the first appearance of the substring 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the whole 'not'...'poor' substring with 'good'. Return the resulting string

string = input("Enter a string: ")

# finding the word poor and not
not_word = string.find('not')
poor_word = string.find('poor')

# checking if not comes before poor
if not_word != -1 and poor_word != -1 and not_word < poor_word: # replacing not and poor with good
    result_string = string[:not_word] + 'good' + string[poor_word + len('poor'):]
else: # else return the original string
    result_string = string

# printing the result
print(f"Resulting string: {result_string}")

# eg. the weather is not poor today