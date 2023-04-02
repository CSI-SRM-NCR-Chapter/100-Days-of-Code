class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto i:nums)
            if(++count[i]>1) return true;
        return false;
    }
};
