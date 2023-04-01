class Solution {
public:
    double myPow(double x, int n) {
        double result=1.0;
        for(int i=n;i;i/=2){
            if(i&1)result*=x;
            x*=x;
            
        }
        return n>=0?result:1/result; 
    }
};
