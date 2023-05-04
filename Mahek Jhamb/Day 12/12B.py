from collections import Counter
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        note, mag = Counter(ransomNote), Counter(magazine)
        if note & mag == note: 
            return True
        return False