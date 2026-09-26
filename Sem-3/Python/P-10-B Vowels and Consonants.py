# P-10-B Write a program to read a string containing letters, each of which may be in either uppercase or lowercase, and return a tuple 
#  containing the number of vowels and consonants in the string.

def count_vowels_and_consonants(s):
    vowels = 'aeiou'
    s = s.lower()
    vowels_count = sum(1 for char in s if char in vowels)
    consonants_count = sum(1 for char in s if char.isalpha() and char not in vowels)
    return (vowels_count, consonants_count)

if __name__ == "__main__":
    input_string = input("Enter a string: ")
    result = count_vowels_and_consonants(input_string)
    print("Vowels and Consonants:", result)
