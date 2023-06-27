class Solution {
public:
    bool canMeasureWater(int a, int b, int target) {
        if (a+b < target) return false;
        if (target % __gcd(a,b) == 0) return true;

        return false;
    }
};
