// Basic Method
class Solution {
public:
    int fib(int n) {
        int first = 0, second = 1,temp;
        while(n--){
            temp = first + second;
            first = second;
            second = temp;
        }
        return first;
    }
};
