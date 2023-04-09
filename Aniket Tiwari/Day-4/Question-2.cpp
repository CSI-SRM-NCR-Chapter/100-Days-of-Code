#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long int num=n;
        double res=1.0;
        bool flag=n<0;
        if(flag)
        num*=-1;
        while(num>0){
            if(num%2==1)
            res*=x;

            x=x*x;
            num=num/2;
        }
        if(flag)
        return 1.0/(double)res;
        return res;
    }
};