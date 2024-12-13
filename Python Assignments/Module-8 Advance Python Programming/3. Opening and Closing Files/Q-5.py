# Write a Python program to create a file and write a string into it.

# with statement is better way to access/open files as it closes file automatically avoiding errors
with open("File2","w") as f:
    f.write("Hello World!")
    f.write("This is some content")