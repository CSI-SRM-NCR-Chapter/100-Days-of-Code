class Solution {
public:

    int conversion(int num, int base)
    {
        long long int ans = 0;
        int i = 0;
        while (num != 0)
        {
            if(ans<INT_MAX/10)
                ans = ans + (num % base) * pow(10, i);
            i++;
            num = num / base;
        }
        return ans;
    }

    bool check_Palindrome(int n)
    {
        string s = to_string(n);
        if (s.size() == 1)
            return true;
        int start = 0;
        int end = s.size() - 1;
        while (start <= end)
        {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {

    for (int i = 2; i <= n - 2; i++)
        if (check_Palindrome(conversion(n, i)) == 0)
            return false;
    return true;

    }
};