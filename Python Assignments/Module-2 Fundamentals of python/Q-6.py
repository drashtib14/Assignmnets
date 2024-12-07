# test whether a passed letter is a vowel or not

letter = input("Enter an alphabet: ").lower() # using lower built in function to transform any letter from upper to lower

# applying conditions to find vowel
if letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u' :
    print(f"Letter {letter} is vowel!")
else : # if it is not vowel then else part will execute
    print(f"Letter {letter} is not vowel!")