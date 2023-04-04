class Solution:
    def isUgly(self, n: int) -> bool: 
        if n == 0: 
            return False
        number= [2,3,5]
        while n != 1:
            for x in number:
               if n % x == 0:
                   n = n // x
                   break
            else:
                return False

        return True