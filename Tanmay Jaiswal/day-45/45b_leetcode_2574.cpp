class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n = nums.size();
        int i=0, j = n-1;

        vector<int> leftsum(n), rightsum(n);
        for (int i=1; i<n; i++) {
            leftsum[i] = leftsum[i-1] + nums[i-1];
            rightsum[n-i-1] = rightsum[n-i] + nums[n-i];
        }

        vector<int> ans(n);
        for (int i=0; i<n; i++)
            ans[i] = abs(leftsum[i]-rightsum[i]);

        return ans;
    }
};
