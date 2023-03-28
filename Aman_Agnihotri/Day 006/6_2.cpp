class Solution {
public:
    int addDigits(int num) {
        int result = 0;
        while (num > 9) {
            int next_num = 0;
            while (num > 0) {
                next_num += (num % 10);
                num /= 10;
            }
            num = next_num;
        }
        return num;
    }
};
