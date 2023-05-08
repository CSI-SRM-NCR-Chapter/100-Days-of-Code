class Solution {
public:
    int addDigits(int num) {
        int rem = num % 9;
        return rem == 0 && num != 0 ? 9 : rem;
    }
};
