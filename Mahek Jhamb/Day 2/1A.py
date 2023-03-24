class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        unique={}
        for i in nums:
            if i not in unique:
                unique[i] = 1
            else:
                unique[i] += 1

        for key, val in unique.items():
            if val == 1:
                return key