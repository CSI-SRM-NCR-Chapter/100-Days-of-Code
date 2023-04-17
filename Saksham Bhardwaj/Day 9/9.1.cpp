class Solution {
public:
    int reverse(int x) {
        long int rev = 0;
        while (x != 0)
        {
            int temp = x%10;
            rev = rev*10+temp;
            x = x/10;
        }
        if (rev <= INT_MAX && rev >= INT_MIN)
        {
        return rev;
        }
        return 0;
    }
