class Solution:
    def fib(self, n: int) -> int:
        count=0 
        f0=0
        f1=1
        if n in [0,1]:
            return n
        for i in range(0,n-1):
            count=f0+f1
            f0=f1
            f1=count
        return count