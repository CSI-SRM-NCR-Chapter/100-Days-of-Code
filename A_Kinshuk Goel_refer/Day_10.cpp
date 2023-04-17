class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) return false;
        if(__builtin_popcount(n)==1) return true;
        return false;
    }
};  // Day 10.1

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = (nums.size() * (nums.size()+1)) / 2;
        for(auto e: nums)
            res -= e;
        return res;
    }
};  // Day 10.2