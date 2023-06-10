class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        vector<int> ans(nums.size());
        int start = 0;
        int end = nums.size()-1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]%2==0){
                ans[start++]=nums[i];
            }
            else{
                ans[end--]=nums[i];
            }
        }
        return ans;
    }
};
