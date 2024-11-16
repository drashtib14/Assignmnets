# Write a Python program to sort a list using both sort() and sorted().

# sort()
my_list = [20, 40, 10, 30]

print("Original List: ",my_list) # Output : [20, 40, 10, 30]

my_list.sort()
print("Using sort(): ",my_list) # Output : [10, 20, 30, 40]

# sorted()
list1 = sorted(my_list)
print("Using sorted(): ",list1)