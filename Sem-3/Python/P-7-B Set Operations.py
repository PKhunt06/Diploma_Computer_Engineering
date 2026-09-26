# P-7-B Write a program to perform below operations on set:
# ● Create two different sets with the data. 
# ● Print set items. 
# ● Add/remove items in/from a set.
# ● Perform operations on sets: union, intersection, difference, symmetric difference, check subset of another set.

s1={'a','e','i','o'}
s2={"hello",147,-2,"world"}
print(s1)
print(s2)
s1.add('u')
print(s1)
s2.remove("world")
print(s2)
A={1,2,3,4,5}
B={4,5,6,7,8}
A.union(B)
print("Union=", A.union(B))
print("Intersection=",A&B)
print("Difference=",A-B)
print("Symmetric difference=",A^B)
X={1,2,3,4}
Y={1,2,3,4,5,6,7}
X.issubset(Y)
