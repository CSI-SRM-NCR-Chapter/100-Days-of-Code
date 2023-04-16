class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long y = 0, t = x;
        while (t != 0) {
    	    y = y * 10 + t % 10;
    	    t /= 10;
	    }
	    return x == y;
    }
};