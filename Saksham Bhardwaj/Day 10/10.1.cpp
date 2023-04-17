class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int num = 1;
        while (num < n)
        {
            num = num*2;
        }
        if (num == n)
        {
            return true;
        }
        return false;
    }
};
