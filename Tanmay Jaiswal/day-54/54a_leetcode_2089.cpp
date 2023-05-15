class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        int lb = lower_bound(begin(nums), end(nums), target) - begin(nums);
        int ub = upper_bound(begin(nums)+lb, end(nums), target) - begin(nums);

        if (lb == ub) return {};

        vector<int> ans;
        while (lb < ub) ans.push_back(lb++);

        return ans;
    }
};
