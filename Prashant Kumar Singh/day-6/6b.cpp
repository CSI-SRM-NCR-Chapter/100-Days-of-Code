class Solution {
public:
    int addDigits(int num) {
        int res = 0;
        while(num>9){
           int temp = num % 10;
            num = num/10 + temp;
        }
        return num;
    }
};
