class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> RARR;
        int k=nums[0];
        RARR.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=k){
                RARR.push_back(nums[i]);
                k=nums[i];
            }
        }
        nums = RARR ;
    return RARR.size();
    }
};