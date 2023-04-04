class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto nums_end = unique(nums.begin(),nums.end());
        nums.erase(nums_end,nums.end());
        return nums.size();
    }
};
