class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
    vector<int> diff1, diff2;
    for (int x : s) {
        if (s2.find(x) == s2.end()) {
            diff1.push_back(x);
        }
    }
    
    for (int x : s2) {
        if (s.find(x) == s.end()) {
            diff2.push_back(x);
        }
    }
    return {diff1, diff2};
    }
};