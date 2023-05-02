class Solution {
public:
    int getSum(int x, int y) {
        unsigned int a = x, b = y;
        while (b) {
            int temp = (a^b);
            b = (a&b) << 1;
            a = temp;
        }

        return a;
    }
};
