class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){
                    res[i]=max(res[i],res[j]+1);
                }
            }
        }
        return *max_element(res.begin(), res.end());
    }
};
