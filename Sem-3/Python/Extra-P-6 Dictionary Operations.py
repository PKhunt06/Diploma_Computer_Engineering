# Extra-P-6 Write a program to perform the below operations on the Dictionary:
# Create a Dictionary
# Dictionary Length
# Access Dictionary Items
# Change Dictionary Items
# Add Items to a Dictionary
# Remove Dictionary Items
# Dictionary Membership Test

my_dict = {'name': 'Alice', 'age': 30, 'city': 'New York'}
print("Length:", len(my_dict))
print("\nItems:", my_dict)
my_dict['age'] = 31
print("Updated Age:", my_dict['age'])
my_dict['email'] = 'alice@example.com'
print("After Adding Email:", my_dict)
del my_dict['city']
print("After Removal:", my_dict)
key_to_check = 'name'
print(f"'{key_to_check}' is {'present' if key_to_check in my_dict else 'not present'} in the dictionary.")
