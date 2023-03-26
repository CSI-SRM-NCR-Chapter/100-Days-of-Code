class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        
        // convert to positive is n is negative, we divite by 1 later
        if (nn<0) { nn = -1*nn; }
        // iterative multiplication, base gets multiplied by 2 and power gets reduced to reduce the number of iterations
        while (nn) {
            if (nn % 2) {
                ans = ans * x;
                nn = nn - 1;
            }
            else {
                x = x * x;
                nn = nn / 2;
            }
        }
        // division by 1 as mentioned before
        if (n < 0) ans = (double)(1.0) / (double)(ans);
        return ans;

    }
};
