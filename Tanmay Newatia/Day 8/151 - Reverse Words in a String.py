class Solution:
    def reverseWords(self, s: str) -> str:
        s=s.split()
        s.reverse()
        d=""
        for i in range(0,len(s)):
            d+=s[i]
            if i!=len(s)-1:
                d+=" "
        return d 