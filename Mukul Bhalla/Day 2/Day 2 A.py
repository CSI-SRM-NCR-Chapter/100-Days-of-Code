class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        counter = []
        for i in nums:
            counter.append(nums.count(i))

        for k in counter:
            if (k != 2):
                return nums[counter.index(k)]
