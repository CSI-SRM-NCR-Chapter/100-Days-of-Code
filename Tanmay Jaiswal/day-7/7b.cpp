class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=0;

        while (i<n and j<n) {
            while (i<n and nums[i] == 0) i++;
            if (i<n) swap(nums[i++], nums[j++]);
        }
    }
};
