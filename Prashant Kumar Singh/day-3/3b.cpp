class Solution {
public:
    bool isPalindrome(int x) {
        long int res = 0;
        int num = x;
        if (num < 0){
            return false;
        }
        while (num > 0) {
            res =  num % 10 + res * 10;
            num /= 10;
        }
        return x == res;
    }
};
