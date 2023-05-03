class Solution {
public:
    bool hasAlternatingBits(int n) {
        int flag1,flag2;
        while(n){
            flag1=n&1;
            if(flag1==flag2) return false;
            n=n>>1;
            flag2=flag1;
        }
        return true;
    }
};
