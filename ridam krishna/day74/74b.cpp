class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        sort(begin(nums), end(nums));
        ans=(nums[0]+k)-(nums[n-1]-k);
        if(ans<0) return abs(ans);
        else return 0;
    }
};
