class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        int mx=0;
        sort(begin(nums), end(nums));
        for(int i=1; i<n; i++){
            mx=max(mx,abs(nums[i]-nums[i-1]));
        }
        return mx;
    }
};
