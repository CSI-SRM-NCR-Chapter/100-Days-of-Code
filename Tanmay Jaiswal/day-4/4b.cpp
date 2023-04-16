class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        int N = n;

        n = abs(n);
        while (n>0) {
            if (n&1) res *= x;
            x *= x;
            n >>= 1;
        }

        if (N>=0) return res;
        return 1.0/res;
    }
};
