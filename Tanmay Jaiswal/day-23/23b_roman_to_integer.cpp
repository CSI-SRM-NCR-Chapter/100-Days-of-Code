class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int n = s.size();
        int sum = 0;

        for (int i=0; i<n; i++)
            // if the next value is greater then subtract the current value from the sum
            if (i<n-1 and mp[s[i]] < mp[s[i+1]]) sum -= mp[s[i]];
            // otherwise, if the next value is smaller then add the current value to sum
            else sum += mp[s[i]];

        return sum;
    }
};
