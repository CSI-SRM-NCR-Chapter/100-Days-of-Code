class Solution:
    def reverseWords(self, s: str) -> str:
        # Remove leading and trailing spaces, and reduce multiple spaces to a single space
        s = ' '.join(s.split())

        # Split the string into individual words and store them in a list
        words = s.split()

        # Reverse the order of the words in the list
        words.reverse()

        # Concatenate the words into a string separated by a single space
        return ' '.join(words)