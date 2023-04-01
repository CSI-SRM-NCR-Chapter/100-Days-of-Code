class Solution {
public:
    bool isUgly(int n) {
        if (n == 0) return false;
        for (const int p : {2, 3, 5}) //p=prime
        while (n % p == 0)
        n /= p;
        return n == 1;
    }    
};       
