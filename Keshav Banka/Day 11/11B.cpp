class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, curr = 0;
        for (int i = 0; i < nums.size(); i ++) {
            if (nums[i]) {
                curr++;
            }
            else {
                ans = max(ans, curr);
                curr = 0;
            }
        }
        return max(ans, curr);
    }
};
