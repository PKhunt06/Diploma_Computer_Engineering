# P-7-C Write a program to perform below operations on dictionary:
# ● Create a dictionary.
# ● Print dictionary items. 
# ● Add/remove key-value pair in/from a dictionary.
# ● Check whether a key exists in a dictionary.
# ● Iterate through a dictionary.
# ● Concatenate multiple dictionaries.

def dictionary_operations():
    my_dict = {'name': 'Alice', 'age': 30, 'city': 'New York'}
    print("Original Dictionary:\n", my_dict)
    my_dict['occupation'] = 'Engineer'
    print("\nDictionary after adding a new key-value pair:\n", my_dict)
    my_dict.pop('age', None)
    print("\nDictionary after removing a key-value pair:\n", my_dict)
    key_to_check = 'city'
    if key_to_check in my_dict:
        print(f"\nKey '{key_to_check}' exists in the dictionary.")
    else:
        print(f"\nKey '{key_to_check}' does not exist in the dictionary.")
    print("\nIterating through the dictionary:")
    for key, value in my_dict.items():
        print("Key: {}, Value: {}".format(key, value))
    dict1 = {'a': 1, 'b': 2}
    dict2 = {'c': 3, 'd': 4}
    dict3 = {'e': 5}
    concatenated_dict = {**dict1, **dict2, **dict3}
    print("\nConcatenated Dictionary:\n", concatenated_dict)
dictionary_operations()
