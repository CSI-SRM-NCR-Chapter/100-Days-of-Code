class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int k=0;k<nums.size();k++){
            if(nums[k]!=0){
                nums[i]=nums[k];
                i++;
            }
        }
        for(int l=i;l<nums.size();l++){
            nums[l]=0;
        }
    }
};