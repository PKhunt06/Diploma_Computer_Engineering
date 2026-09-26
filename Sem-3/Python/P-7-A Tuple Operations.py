# P-7-A Write a program to perform below operations on tuple:
#  ● Create  a tuple with different data types.
#  ● Print tuple items. 
#  ● Convert tuple into a list.
#  ● Remove data items from a list.
#  ● Convert list into a tuple.
#  ● Print tuple items.

a = ("Python", 4330701, "Scripting language", 147)

print("Original tuple:", a)
print()

b = list(a)
print("Converted to list:", b)
print()

b.remove("Python")
print("List after removal:", b)
print()

a = tuple(b)
print("Tuple after removal:", a)
print()

print("Final tuple:", a)
