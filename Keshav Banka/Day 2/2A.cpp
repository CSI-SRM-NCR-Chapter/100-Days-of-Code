class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto ele : nums) ans ^= ele;
        return ans;
    }
};