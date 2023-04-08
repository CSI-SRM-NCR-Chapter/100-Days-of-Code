class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        unsigned int rem, next=0;
        if (x < 0)
            return false;
        while (x != 0){
            rem = x%10;
            next = (next*10) + rem;
            x = x/10;
        }
        if (next == y)
            return true;
        else
            return false;
    }
};