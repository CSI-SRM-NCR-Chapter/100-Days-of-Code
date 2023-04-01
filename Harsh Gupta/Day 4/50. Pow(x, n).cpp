class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0){
            return 1.0;
        }
        if(n==1){
            return x;
        }
        if(n<0){
            return myPow(1/x,-n);
        }
        double ans=1;
        while(n>0){ 
            if(n&1){
                ans*=x;
            }
            x*=x;
            n>>=1;
        }
        return ans;
        
    }
};
