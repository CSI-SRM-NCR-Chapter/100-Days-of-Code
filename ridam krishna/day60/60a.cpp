class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int x = INT_MAX;
        int i=0, j=0, sum=0;

        while(j<n){
            if(sum<target) sum=sum+nums[j++];
            while(sum>=target) {
                x=min(x, j-i);
                sum=sum-nums[i++];
            }
        }
        return x==INT_MAX? 0 : x;
    }
};
