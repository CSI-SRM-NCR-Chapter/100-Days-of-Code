class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long int n=1; n<=num; n++){
            if(n*n==num) return true;
        }
        return false;
    }
};
