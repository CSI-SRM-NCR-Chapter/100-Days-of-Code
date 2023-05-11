class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // hashsets can contain one element only once
        // return true if hashset size == vector size
        return nums.size() > unordered_set<int>(nums.begin(),nums.end()).size();
    }
};
