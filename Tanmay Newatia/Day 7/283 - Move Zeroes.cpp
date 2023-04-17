class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
                nums[c]=nums[i];
                c++;
            }
        }
        for(int i=c;i<nums.size();i++){
            nums[i]=0;
        }
    }
};