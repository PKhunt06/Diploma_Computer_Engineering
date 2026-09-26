# P-8-B Write a program that defines a function to return a new list by eliminating the duplicate values in the list.

def remove_dup(lst):
    return list(set(lst))

if __name__ == "__main__":
    my_list = [1, 2, 2, 3, 4, 4, 5, 6, 6, 7]
    print("Original list:", my_list)
    unique_list = remove_dup(my_list)
    print("List with duplicates removed:", unique_list)
