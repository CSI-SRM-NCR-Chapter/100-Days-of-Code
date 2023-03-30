class Solution {
public:
    int addDigits(int num) {
        if (num / 10 == 0)
            return num;
        while (num / 10 > 0){
            int ans = num, sum = 0, rem = 0;
            while (ans > 0){
                rem = ans % 10;
                sum = sum + rem;
                ans = ans / 10;
            }
            num = sum;
        }
        return num;
    }
};