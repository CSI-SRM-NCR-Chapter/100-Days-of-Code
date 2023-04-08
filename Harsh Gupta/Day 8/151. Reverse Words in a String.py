class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s = s.split()
        i = 0
        j = len(s)-1
        while(i<j):
            temp = s[i]
            s[i] = s[j]
            s[j] = temp
            i+=1
            j-=1
        return (' '.join(s))
