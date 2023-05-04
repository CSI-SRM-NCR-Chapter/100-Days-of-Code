class Solution {
public:
    bool isPerfectSquare(int num) {
        long long lnum = num;
        for(long long i = 1; i * i <= lnum; i++){
            if(i * i == lnum) return true;
        }
        return false;
    }
};