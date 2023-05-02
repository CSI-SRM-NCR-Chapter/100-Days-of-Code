class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        int ns = (1<<n);

        for (int i=0; i<ns; i++) {
            int x = i;

            vector<int> temp;
            for (int j=0; j<n; j++)
                if ((x>>j) & 1) temp.push_back(nums[j]);
            
            res.push_back(temp);
        }

        return res;
    }
};
