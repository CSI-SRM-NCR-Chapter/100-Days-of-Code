class Solution:
    def partition(self, s: str) -> list[list[str]]:
        res = []

        def extend(i, cur):
            if i >= len(s):
                res.append(cur[::])
            p = ''
            for j in range(i, len(s)):
                p += s[j]
                if p == p[::-1]:
                    extend(j + 1, cur + [p])
        
        extend(0, [])
        return res