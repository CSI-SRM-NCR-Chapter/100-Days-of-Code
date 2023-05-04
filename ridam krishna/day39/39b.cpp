class Solution {
public:
    void fun(int i, vector<int>& nums, vector<int>& v, vector<vector<int>>& ans)
    {
        if(i == nums.size()) 
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        fun(i+1,nums,v,ans);
        v.pop_back();
        fun(i+1,nums,v,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //not so
        vector<vector<int>> ans;
        vector<int> v;
        fun(0,nums,v,ans);
        return ans;
        
    }
};
