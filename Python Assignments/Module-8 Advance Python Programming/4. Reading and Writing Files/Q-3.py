# Write a Python program to read the contents of a file and print them on the console.

with open("File","r") as f:
    # read() reads all the contents of file
    # print(f.read())

    # readline() reads one string from the file
    # print(f.readline())
    # print(f.readline())

    # returns a list of strings
    print(f.readlines())

# only one method executes at a time