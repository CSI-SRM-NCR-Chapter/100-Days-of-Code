class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x=k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+x);
        reverse(nums.begin()+x, nums.end());
    }
};
