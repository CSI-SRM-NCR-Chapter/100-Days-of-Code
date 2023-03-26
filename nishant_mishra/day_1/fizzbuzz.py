class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        # Having to append to a list takes away most of the optimization 
        # that occurs when printing to the console directly.
        # Just use basic approach - top 78%
        ans = []
        for i in range(1, n+1):
            divisible_by_3 = (i % 3 == 0)
            divisible_by_5 = (i % 5 == 0)
            
            if divisible_by_3 and divisible_by_5:
                ans.append("FizzBuzz")
            elif divisible_by_3:
                ans.append("Fizz")
            elif divisible_by_5:
                ans.append("Buzz")
            else:
                ans.append(str(i))
        
        return ans  
