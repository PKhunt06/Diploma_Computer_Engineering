# P-8-A Write a program that defines a function (shuffle) to scramble a list into a random order, like shuffling a deck of cards.

import random
def shuffle(lst):
    new_lst = lst[:]
    random.shuffle(new_lst)
    return new_lst

if __name__ == "__main__":
    my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print("Original list:", my_list)
    shuffled_list = shuffle(my_list)
    print("Shuffled list:", shuffled_list)
