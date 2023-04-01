class Solution {
public:
    double myPow(double x, int n) {
        double ans;
        if(n==0) return 1;
        ans=pow(x,n/2);
        if(n%2==0) return ans*ans;
        else{
            if(n>0)
                return x*ans*ans;
            else
                return (ans*ans)/x;
        }

        }
};
