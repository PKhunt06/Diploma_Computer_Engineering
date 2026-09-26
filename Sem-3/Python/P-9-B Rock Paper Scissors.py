# P-9-B Write a program that plays the popular scissor-rock-paper game. (A scissor can cut a paper, a rock can knock a scissor, and a paper can wrap a rock.) 
#  The program randomly generates a number 0, 1, or 2 representing scissor, rock, and paper. The program prompts the user to enter a number 0, 1, or 2 
#  and displays a message indicating whether the user or the computer wins, loses, or draws.

import random

def play_rps():
    SCISSOR = 0
    ROCK = 1
    PAPER = 2

    choices = ["Scissor", "Rock", "Paper"]
    computer_choice = random.randint(0, 2)

    user_choice = int(input("Enter 0 for Scissor, 1 for Rock, 2 for Paper: "))
    print("You choose", choices[user_choice], "Computer choose", choices[computer_choice])

    if user_choice == computer_choice:
        print("It's a draw!")
    elif (user_choice == SCISSOR and computer_choice == ROCK) or \
         (user_choice == ROCK and computer_choice == PAPER) or \
         (user_choice == PAPER and computer_choice == SCISSOR):
        print("You lose!")
    else:
        print("You win!")
play_rps()
