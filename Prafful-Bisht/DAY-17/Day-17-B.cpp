class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans; 
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums.size()){
                nums[0]+=nums.size();
                continue;
            }
            nums[nums[i]%nums.size()]+=nums.size();
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]>(2*nums.size())){
                ans.push_back(i);
            }
        }
        if(nums[0]>(2*nums.size())){
            ans.push_back(nums.size());
        }
        return ans;
    }
};