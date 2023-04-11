class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        c=0
        res=0
        s=s+t
        for i in s:
            res=res^ord(i)
        return chr(res)