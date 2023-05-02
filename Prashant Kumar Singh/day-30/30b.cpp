class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp1, temp2, ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] >= 0) temp1.push_back(nums[i]);
            else temp2.push_back(nums[i]);          
        }
        for(int j=0; j<temp1.size(); j++){
            ans.push_back(temp1[j]);
            ans.push_back(temp2[j]);
        }
        return ans;
    }
};
