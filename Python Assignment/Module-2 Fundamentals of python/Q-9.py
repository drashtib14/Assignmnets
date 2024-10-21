# sum of the first n positive integers

n = int(input("Enter a postive integer: "))

sum1 = n * (n + 1) // 2 # formula to calculate numbers and using // to avoid floating value

# eg.the sum of first 5 numbers will be 15
print(f"The sum of the first {n} positive integers is: {sum1}")