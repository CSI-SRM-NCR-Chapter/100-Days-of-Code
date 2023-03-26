class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> Arr;
        int k=nums[0];
        Arr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=k){
                Arr.push_back(nums[i]);
                k=nums[i];
            }
        }
        nums = Arr ;
    return Arr.size();
    }
};