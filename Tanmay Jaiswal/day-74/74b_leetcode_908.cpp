class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx = nums[0], minn = nums[0];
        
        for (int i=0; i<n; i++) {
            maxx = max(maxx, nums[i]);
            minn = min(minn, nums[i]);
        }

        int diff = maxx - minn;

        if (diff - k <= k) return 0;
        return diff-k-k;
    }
};
