# check if a number is positive, negative or zero

num = int(input("Enter a Number: ")) # taking number from user

if num > 0 : # if num is greater than 0 then following statement will be executed
    print(f"{num} is positive") 
elif num < 0 : # if num is less than 0 then following statement will be executed
    print(f"{num} is negative")
else : # if num is neither negative or positve (basically 0) then following statement will be executed
    print(f"Num is zero")