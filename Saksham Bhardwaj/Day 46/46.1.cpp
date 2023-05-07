class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(auto x: nums) ans.push_back(x * x);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
