# Write a Python program to write multiple strings into a file.

with open("File","w") as f:
    # using write() method
    # f.write("Hello World!")
    # f.write("\nThis is some content")
    
    # using writeline() method
    f.writelines(["Hello World!","\nThis is some content"])