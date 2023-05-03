class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0; // stores the min time required
        char prev = 'a'; // stores previous character

        for (auto i:word) {
            // if previous and current character are same then only
            // time required for typing is added to our ans variable
            if (i == prev) ans++;
            else {
                // ans = ans + (minimum time required to move pointer from the previous character to the current character) + 1
                // and +1 for typing
                ans += min(abs(i - prev), 26 - abs(i - prev)) + 1;
                prev = i; // updation of previous character
            }
        }

        return ans;
    }
};
