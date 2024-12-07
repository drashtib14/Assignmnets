# Write a Python program to generate random numbers using the random module.

from random import *

print(random()) # it will random value between 0 - 0.9. will return float value
print(randrange(10)) # it will return any number with the given range
print(choice([10, 20, 30, 40, 50])) # it will return random element from the given list
print(randint(1111, 9999)) # it will return 4 digit OTP