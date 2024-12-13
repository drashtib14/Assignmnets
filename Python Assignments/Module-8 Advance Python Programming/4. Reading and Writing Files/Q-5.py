# Write a Python program to check the current position of the file cursor using tell().

with open("File", 'r') as file:
    # Read some data. first 5 charachters
    data = file.read(5)
    print(f"Read data: {data}")
    # Check the cursor position after reading
    position = file.tell()
    print(f"Current cursor position: {position}")