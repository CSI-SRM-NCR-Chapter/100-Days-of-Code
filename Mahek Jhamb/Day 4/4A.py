class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        nums[:]=set(nums)
        nums.sort()
        return len(nums)
    