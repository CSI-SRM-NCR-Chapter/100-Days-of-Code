class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int res =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] !=0){
                nums[res] = nums[i];
                res++;
            }
        }
        for(int i =res;i<nums.size();i++){
            nums[res] = 0;
            res++;
        }
    }
};
