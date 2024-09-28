# test whether a passed letter is a vowel or not

letter = input("Enter an alphabet: ").lower()

if letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u' :
    print(f"Letter {letter} is vowel!")
else :
    print(f"Letter {letter} is not vowel!")