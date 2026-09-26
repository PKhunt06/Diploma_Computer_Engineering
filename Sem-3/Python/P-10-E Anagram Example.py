# P-10-E Two words are anagrams if they contain the same letters. For example, silent and listen are anagrams.

def are_anagrams(word1, word2):
    return sorted(word1) == sorted(word2)

if __name__ == "__main__":
    word1 = input("Enter first word: ")
    word2 = input("Enter second word: ")
    print("Anagrams" if are_anagrams(word1, word2) else "Not anagrams")
