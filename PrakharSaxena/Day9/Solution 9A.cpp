class Solution {
public:
    int reverse(int x) {
        double rev=0,flag=0;
        if(x<0){
            flag=1;
        }
        int k=abs(x);
        while(k>0){
            rev*=10;
            rev+=k%10;
            k/=10;
        }
        if(flag==1){
            rev*=-1;
        }
        if(rev>=INT_MIN && rev<=INT_MAX){
            return rev;
        }
        else return 0;
    }
};