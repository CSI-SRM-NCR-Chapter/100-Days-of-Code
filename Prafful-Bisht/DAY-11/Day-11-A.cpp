class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = __builtin_popcount(x^y);
        return ans;
    }
};