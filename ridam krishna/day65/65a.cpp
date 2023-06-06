class Solution {
public:
unordered_set<int> s;

    bool isHappy(int n) {
        if (n==1) return true;

        if (s.find(n) == s.end()) s.insert(n);
        else return false;

        int N = sumOfSq(n);

        return isHappy(N);
    }

    int sumOfSq(int n) 
    {
        int sum = 0;

        while (n) {
            sum += (n%10)*(n%10);
            n /= 10;
        }

        return sum;
    }
};
