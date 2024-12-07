# find whether a given number is even or odd, print out an appropriate message to the user

num = int(input("Enter a Number: "))

if num % 2 == 0 : # diving num by 2 and if remainder is 0
    print(f"Entered number {num} is Even") 
else :
    print(f"Entered number {num} is Odd")