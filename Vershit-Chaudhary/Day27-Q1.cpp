class Solution {
public:
    bool hasAlternatingBits(int n) {
        int temp=n%2;
        n/=2;
        while(n){
            if(n%2==temp){
                return false; 
            }
            else{
                temp=n%2;
                n=n/2;
            }
        }
        return true;
    }
};
