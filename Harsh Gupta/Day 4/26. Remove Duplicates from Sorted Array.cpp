class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int a = 0;
        ans.push_back(nums[0]);
        for( int i = 1; i<nums.size(); i++){
            if(nums[i]==ans[a]){
                continue;
            }
            else{
                a++;
                ans.push_back(nums[i]);
            }
        }
        nums = ans;
        return ans.size();
    }
};
