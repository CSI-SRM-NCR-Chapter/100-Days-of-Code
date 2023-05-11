// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x >= 0) {
            uint n = x, rev = 0;
            while (n > 0) {
                rev = (rev * 10) + (n % 10);
                n = n / 10;
            }
            return rev == x;
        }
        return false;
    }
};
