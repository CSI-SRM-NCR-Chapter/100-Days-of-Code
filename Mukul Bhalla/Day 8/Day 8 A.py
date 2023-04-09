class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        l1 = s.split()
        l1.reverse()
        return (" ".join(l1))
