class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> sat;
        for (int x: nums) {
            if (sat.find(x) != sat.end()) return 1;
            else sat.insert(x);
        }

        return 0;
    }
};