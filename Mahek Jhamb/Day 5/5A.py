class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        curr,count=nums[0],1
        for i in nums[1:]:
            count+=(1 if curr==i else -1)
            if not count:
                curr=i
                count=1
        return curr
