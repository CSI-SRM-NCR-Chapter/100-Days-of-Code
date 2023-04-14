class Solution:
    def minNumber(self, nums1: List[int], nums2: List[int]) -> int:
        nums1.sort()
        nums2.sort()
        for i in range(len(nums1)):
            if nums1[i] in nums2:
                return nums1[i]
        if nums1[0]<nums2[0]:
            return nums1[0]*10+nums2[0]
        return nums2[0]*10+nums1[0]
        

"""class Solution:
    def minNumber(self, nums1: List[int], nums2: List[int]) -> int:
        m1,m2=min(nums1),min(nums2)
        mx=10
        for i in range(len(nums1)):
            if nums1[i] in nums2:
                if nums1[i]<mx:
                    mx=m1=m2=nums1[i]
        if m1==m2:
            return m1
        else:
            if m1<m2:
                return m1*10+m2
            else:
                return m2*10+m1"""