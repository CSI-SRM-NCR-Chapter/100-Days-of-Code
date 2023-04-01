class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a, b;
        for(a=0;a<nums.size();a++){
            for(b=a+1;b<nums.size();b++){
                if(nums[a]+nums[b]==target) return {a,b};
            
            }
        }
        return {a,b};        
    }
};
