class Solution {
public:
    double myPow(double x, int n) {
        double ans=x, res=0;
        if (x == 1){
            res = 1;
        }
        else {
            if (n > 0){
                for (unsigned int i=2; i<=n; i++)
                    ans = ans*x;
                res = ans;
            }
            else if (n == 0){
                res = 1;
            }
            else if (n < 0){
                for (int i=n+1; i<0; i++)
                    ans = ans*x;
                res = 1/ans;
            }
        }
        return res;
    }
};