class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        count=0
        maxC=0
        for i in nums:
            if i==1:
                count+=1
                maxC=max(maxC,count)
            else :
                count=0
        return maxC