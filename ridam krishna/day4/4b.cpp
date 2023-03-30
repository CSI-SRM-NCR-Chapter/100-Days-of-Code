class Solution {
public:
    double myPow(double a, int n) {
        //AND operation between a odd number with 1 will always shows 1 as a result.
        //and the same operation with even.
        double res=1;
        int b=abs(n);
        while(b>0){
            if(b & 1) res=res*a;
            b=b/2;
            if(b>0) a=a*a;
        }
        //2^-1 then 1/2
        if(n<0){
            return 1/res;
        }

        return res;
    }
};
