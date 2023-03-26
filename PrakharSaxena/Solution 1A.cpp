class Solution {
public:
    int fib(int n) {
         if (n <= 1){
            return n;
        }
        int first = fib(n-1);
        int second = fib(n-2);
        return first + second;
    }
};