class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()==2 or nums.size()==1) return -1;
        sort(begin(nums), end(nums));
        int st=0;
        int ed=nums.size()-1;
        int mid=(st+ed)/2;
        int res=nums[mid];
        return res;
    }
};
