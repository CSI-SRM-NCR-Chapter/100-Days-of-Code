class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        d={}
        for i,n in enumerate(nums):
            if n in d:
                return d[n],i
            else:
                d[target-n]=i