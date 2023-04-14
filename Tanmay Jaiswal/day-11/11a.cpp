class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x^y;
        int c = 0;
        while (res) {
            if (res&1) c++;
            res>>=1;
        }

        return c;
    }
};