class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        l=len(nums)
        nums.sort()
        c=0
        for i in nums:
            if i!=c:
                return c
            else:
                c+=1
        return c