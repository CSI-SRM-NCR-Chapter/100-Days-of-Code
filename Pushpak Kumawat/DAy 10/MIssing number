class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> full(nums.size()+1);
        iota(full.begin(), full.end(), 0);
        
        for(int num : nums){
            full.erase(remove(full.begin(), full.end(), num), full.end());
        }
        
        return full[0];
    }
};