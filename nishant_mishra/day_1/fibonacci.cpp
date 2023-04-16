class Solution {
public:
    // Algorithm optimised for time, beats 100% of solutions on time compared to ~30% with recursive approach
    int fib(int n) {
        if(n <= 1) { return n; }

        int a = 0, b = 1, c = 0;

        for(int i = 2; i <= n; i++) {
            c= a + b;
            a = b;
            b = c;
        }

        return c;
    }
};
