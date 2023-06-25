class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int imin = 0, imax = nums.size(), n = nums.size();
        for(int i = 0; i < n; ++i){
            if(nums[i] == 1) imin = i;
            if(nums[i] == n) imax = i;
        }
        if(imin < imax) return (imin + n - imax - 1);
        return (imin + n - imax - 1) - 1;
    }
};
