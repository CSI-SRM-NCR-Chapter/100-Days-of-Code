// https://leetcode.com/problems/merge-sorted-array/description/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Just add elements to nums1 from the last element using two pointers

        int i = m - 1;
        int j = n - 1;
        int k = m + j; // total elements in array 1

        while (i >= 0 && j >= 0) {
            if(nums1[i] > nums2[j]) { nums1[k--] = nums1[i--]; }
            else { nums1[k--] = nums2[j--]; }
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

    }
};
