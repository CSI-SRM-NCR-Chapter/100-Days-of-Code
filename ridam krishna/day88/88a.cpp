class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int small=nums[0];
        int ans=0;
        for(auto x: nums){
            if(small<x){
                ans=max(ans,x-small);
            }
            else small=x;
        }
        return ans;
        //kadanes algo. (famous que: max subarray sum.)
    }
};
