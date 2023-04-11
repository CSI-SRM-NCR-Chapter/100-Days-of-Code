class Solution {
public:
    bool isPowerOfTwo(int n) {
        // O(1)
        if(n<=0){
            return false;
        }
        int bits = __builtin_popcount(n); // This will return no. of true bits in our number.
        if(bits==1){
            return true;
        }
        return false;
    }
};