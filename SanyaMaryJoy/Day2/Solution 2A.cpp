class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int r=0;
        for(int i=0;i<nums.size();i++){
            r=r^nums[i];
        }
        return r;
    }
};