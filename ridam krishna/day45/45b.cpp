class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> v1(n);
        vector<int> v2(n);
        int i=0;
        int j=n-1;
        for(int i=1; i<n; i++){
            v1[i] = v1[i-1] + nums[i-1];
            v2[n-i-1] = v2[n-i] + nums[n-i];
        }
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = abs(v1[i]-v2[i]);
        }
        return ans;
    }
};
