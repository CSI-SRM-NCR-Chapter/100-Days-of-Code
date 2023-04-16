class Solution {
public:
    int reverse(int x) {
        bool flag = (x<0? 1:0);
        int res = 0;

        while (x) {
            int rem = x%10; x /= 10;

            if ((!flag and res < INT_MAX/10) or (res == INT_MAX/10 and rem<=7) or
                (flag and res >= INT_MIN/10) or (res == INT_MIN/10 and rem>=-8)) {
                res = (res*10) + rem;
            }
            else return 0;
        }

        return res;
    }
};
