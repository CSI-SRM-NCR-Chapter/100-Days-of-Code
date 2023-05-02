class Solution {
public:
    int romanToInt(string s) { 
 int result = 0;
        unordered_map<char,int> mp {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (i > 0 && mp[s[i-1]] < mp[s[i]]) {
                result += mp[s[i]] - mp[s[i-1]];
                i--;
            } else {
                result += mp[s[i]];
            }
        }
        
        return result;
    }
};
