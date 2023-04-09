class Solution:
    def myPow(self, x: float, n: int) -> float:
        def recurPow(x,n):
            n=abs(n)
            if n==0:
                return 1
            elif n%2==0:
                return recurPow(x*x,n//2)
            else:
                return x*recurPow(x*x,(n-1)//2)
        ans=recurPow(x,n)
        return float(ans) if n>=0 else 1/ans
        