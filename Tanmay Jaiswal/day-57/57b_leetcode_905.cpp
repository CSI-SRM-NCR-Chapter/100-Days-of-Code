class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int evenIdx = 0, i = 0;

        while (i<n) {
            if (nums[i] % 2 == 0) swap(nums[i], nums[evenIdx++]);
            i++;
        }

        return nums;
    }
};
