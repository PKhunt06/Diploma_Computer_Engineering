# P-10-A Write a program to check whether a given string is palindrome or not.

def is_palindrome(s):
    cleaned_str = ''.join(s.split()).lower()
    return cleaned_str == cleaned_str[::-1]

if __name__ == "__main__":
    input_string = input("Enter a string: ")
    result = is_palindrome(input_string)
    print(f'"{input_string}" is {"a palindrome" if result else "not a palindrome"}.')
