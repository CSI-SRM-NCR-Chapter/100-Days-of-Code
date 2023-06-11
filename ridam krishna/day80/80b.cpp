class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n=nums.size();
        int mx=0, mxidx=0;
        int mn=INT_MAX, mnidx;
        int count=0;

        for(int i=0; i<n; i++){
            mx=max(mx, nums[i]);
            if(nums[i]==mx) mxidx=i;
            mn=min(mn, nums[i]);
            if(nums[i]==mn) mnidx=i;
        }
        
        count=mnidx+n-mxidx-1;
        if(mnidx<mxidx) return count;
        return --count;
            
    }
};
