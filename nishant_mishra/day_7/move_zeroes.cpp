// https://leetcode.com/problems/move-zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zpointer=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0){
                nums[zpointer]=nums[i];
                ++zpointer;
            }
        }
        for(int i=zpointer;i<nums.size();++i){
            nums[i]=0;
        }   
       
    }
};
