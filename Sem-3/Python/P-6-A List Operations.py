# P-6-A Write a program to perform the below operations on the list:
# Create a list.
# Add/Remove an item to/from a list.
# Get the number of elements in the list.
# Access elements of the list using the index.
# Sort the list.
# Reverse the list.

l1 = ['apple','banana','orange','kiwi']
print(l1)

l1.append('pineapple')
print(l1)

l1.remove('kiwi')
print(l1)

print("Length of My List=",len(l1))

x = l1[2]
print("Access Element of the list=",x)

l2 = [9,8,2,6,5]
l2.sort()
print(l2)

l1.reverse()
print(l1)
