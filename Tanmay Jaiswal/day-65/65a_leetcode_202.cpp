class Solution {
public:

    bool isHappy(int n, int slow = 0, int fast = 0) {
        if (fast == 1) return true;
        if (slow == fast) {
            if (slow == 0) {slow = n; fast = n;}
            else return false;
        }

        slow = sumOfSq(slow);
        fast = sumOfSq(sumOfSq(fast));

        return isHappy(n, slow, fast);
    }

    int sumOfSq(int n, int sum = 0) {
        if (n == 0) return sum;
        return sumOfSq(n/10, sum + (n%10)*(n%10));
    }
};
