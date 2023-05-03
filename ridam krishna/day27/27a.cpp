class Solution {
public:
    bool hasAlternatingBits(int n) {
        int temp=0;
        int prev;
        while(n){
            temp=n%2;
            n=n/2;
            if((prev==1 && temp==1) || (prev==0 && temp==0)){
                return false;
            }
            prev=temp;
        }
        return true;
    }
};
