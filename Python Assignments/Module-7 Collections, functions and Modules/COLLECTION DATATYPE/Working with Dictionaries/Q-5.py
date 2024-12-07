# Write a Python program to merge/convert two lists into one dictionary using a loop

keys = ["name", "age", "city"] # list
values = ["Alice", 25, "New York"] # list

merged_dict = {} # a dictionary
for i in range(len(keys)):
    merged_dict[keys[i]] = values[i]

print(merged_dict)