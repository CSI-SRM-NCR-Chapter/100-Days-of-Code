class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        return nums[len/2];
    }
};