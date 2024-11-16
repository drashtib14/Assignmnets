# Write a Python program to access alternate values between index 1 and 5 in a tuple.

my_tuple = ('apple', 'banana', 'cherry', 'date', 'fig', 'grape')

result = my_tuple[1:6:2]
print(result) # ('banana', 'date', 'grape')