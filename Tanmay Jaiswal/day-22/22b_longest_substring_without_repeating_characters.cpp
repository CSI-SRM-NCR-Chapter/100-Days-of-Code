class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int n = s.size();
        int j = 0, i = 0;

        int ans = 0;
        while (i<n and j<n) {
            if (mp[s[i]] == 0) {mp[s[i]] = i+1; i++;}
            else {
                int x = mp[s[i]];
                while (j<x) mp[s[j++]] = 0;
            }
            
            ans = max(ans, i-j);
        }

        return ans;
    }
};
