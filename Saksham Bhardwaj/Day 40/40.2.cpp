class Solution {
public:
    int getSum(int a, int b) {
        unsigned int buff;
        do {
            buff = a & b;
            a ^= b;
            b = buff << 1;
        } while(buff);
        return a;
    }
};
