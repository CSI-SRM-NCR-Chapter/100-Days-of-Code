class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s, t;
        for (auto i:nums1) s.insert(i);
        for (auto i:nums2) t.insert(i);

        vector<vector<int>> ans(2, vector<int>());

        for (auto i:t) {
            if (s.find(i) == end(s)) ans[1].push_back(i);
        }

        for (auto i:s) {
            if (t.find(i) == end(t)) ans[0].push_back(i);
        }

        return ans;
    }
};