class Solution {
public:
    int reverse(int x) {
        int temp = x, res = 0;
        while (temp) {
            int rem = temp % 10;
            if (res > INT_MAX / 10 || res < INT_MIN / 10) return 0;
            res *= 10;
            res += rem;
            temp /= 10;
        }
        return res;
    }
};
