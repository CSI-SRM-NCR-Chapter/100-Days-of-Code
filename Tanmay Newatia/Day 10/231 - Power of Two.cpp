class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n!=0){
            if ((n&1)==1 && (n>>1)==0){
                return 1;}
            else if((n&1)==1 && (n>>1)!=0){
                return 0;}
            n>>=1;}
        return 0;
    }
};