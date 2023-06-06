class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        for(i=0; i<n; i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};
