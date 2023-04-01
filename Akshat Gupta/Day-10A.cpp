class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
             return false;
        }
        int bits = __builtin_popcount(n);
        return bits == 1;     
    }
};