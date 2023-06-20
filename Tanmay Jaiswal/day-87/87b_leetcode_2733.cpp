class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int minn = nums[0], maxx = nums[0];

        for (int i=1; i<n; i++) {
            minn = min(minn, nums[i]);
            maxx = max(maxx, nums[i]);
        }

        for (auto i: nums) 
            if (i != minn && i != maxx) return i;

        return -1;
    }
};
