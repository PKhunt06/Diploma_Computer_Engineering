# P-6-D Write a program to eliminate duplicate values in the list.

list1 = [1,1,1,2,2,2,3,3,3,4,4,5,5]

list2=[]
for  i in list1:
  if i not in list2:
    list2.append(i)
print(list2)
