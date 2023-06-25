class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) return -1;
        sort(nums.begin(), nums.end());
        int i, count=0;
        for(i=1; i<nums.size()-1; i++)
            count = nums[i];
        
        return count;
    }
};
