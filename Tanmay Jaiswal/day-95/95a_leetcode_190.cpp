class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        uint32_t x = pow(2, 31);

        while (n) {
            if (n&1) res += x;
            n >>= 1;
            x /= 2;
        }

        return res;
    }
};
