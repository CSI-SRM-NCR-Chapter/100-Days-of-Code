class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        num2=set(nums)
        l1=len(nums)
        l2=len(num2)
        if(l1!=l2):
            return True
        else:
            return False