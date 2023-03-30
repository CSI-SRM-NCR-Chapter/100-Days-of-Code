class Solution {
public:
    bool isPalindrome(int x) {
        long int r, rev=0,t=x;
        while(t>0){
            r=t%10;
            rev=10*rev+r;
            t=t/10;
        }
        if(rev == x){
            return 1;
        }
        else return 0;
    }
};
