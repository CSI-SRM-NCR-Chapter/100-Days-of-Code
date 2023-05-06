class Solution {
public:
    int findComplement(int num) {
        int n = log2(num)+1;
        int mask = 0;

        while (n--) mask = (mask<<1)|1;

        return mask ^ num;
    }
};
