// Question: https://leetcode.com/problems/remove-duplicates-from-sorted-array

// Remove Duplicates from sorted array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, n = nums.size();
        for (int j = 0; j < n; j ++) {
            int temp = nums[j];
            swap(nums[i], nums[j]);
            i ++;
            while (j < n-1 && temp == nums[j+1])  j ++;
        }
        return i;
    }
};
