class Solution {
public:
    int hammingDistance(int x, int y) {
        x = x ^ y;
        int ans = 0;
        for (int i = 0; i < 32; i ++) {
            ans += ((x & (1 << i)) != 0); 
        }
        return ans;
    }
};
