class Solution {
public:
    double myPow(double x, int n) {
        if (n == 1) return x;
        if (n == INT_MIN) {
            if (x == 1 || x == -1)
                return 1;
            return 0;
        }
        if (n == 0) return 1;
        if (n < 0) return myPow(1/x, -n);
        double half = myPow(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        }
        return half * half * x;
    }
};
