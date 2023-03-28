class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long rev = n;
        if (rev < 0)
            rev = -rev;
        while (rev > 0){
            if (rev % 2 == 1){
                ans = ans * x;
                rev--;
            }
            x = x * x;
            rev = rev / 2;
        }
        if (n < 0)
            return (1.0/ans);
        return ans;
    }
};