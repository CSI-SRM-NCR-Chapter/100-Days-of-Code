class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++){
            int max = 0;
            max = nums[i+1]-nums[i];
            if(max>res) res = max;
        }
        return res;
    }
};
