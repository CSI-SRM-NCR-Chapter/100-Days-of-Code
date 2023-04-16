class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        count = 0
        for i in range(0, m+n):
            if (i > m-1):
                nums1[i] = nums2[count]
                count += 1
        nums1.sort()
