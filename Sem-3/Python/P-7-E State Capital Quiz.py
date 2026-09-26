# P-7-E Write a program to repeatedly prompt the user to enter the capital of a state. Upon receiving the user’s input, the program reports whether the
#  answer is correct. Assume the states and their capitals are stored in dictionaries as key-value pairs.

def capitals_quiz():
    state_capitals = {'Gujarat': 'Gandhinagar','Goa': 'Panaji','Assam': 'Dispur',
    'Maharashtra': 'Mumbai','Rajasthan': 'Jaipur'}
    print("Welcome to the State Capitals Quiz!")

    while True:
        state = input("\nEnter a state (or 'quit' to exit): ").strip()
        if state.lower() == 'quit':
            break
        if state not in state_capitals:
            print("State not found in the quiz.")
            continue
        user_capital = input("What is the capital of " + state + "? ").strip()
        correct_capital = state_capitals[state]
        if user_capital.lower() == correct_capital.lower():
            print("Correct!")
        else:
            print("Incorrect. The capital of " + state + " is " + correct_capital + ".")
capitals_quiz()
