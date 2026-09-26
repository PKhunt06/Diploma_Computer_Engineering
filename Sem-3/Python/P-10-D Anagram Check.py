# P-10-D Write a program that checks whether two words are anagrams.

def are_anagrams(word1, word2):
    return sorted(word1) == sorted(word2)

if __name__ == "__main__":
    word1 = input("Enter first word: ")
    word2 = input("Enter second word: ")
    result = are_anagrams(word1, word2)
    print("Both words are Anagrams:" if result else " Both words are Not anagrams.")
