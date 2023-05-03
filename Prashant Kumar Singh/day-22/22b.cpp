class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int i = 0, j = 0;
        int n = s.size();
        unordered_map <char, int> mp;
        while(j<n){
            mp[s[j]]++;
            if(mp.size() == j-i+1){
                count = max(count, (j-i+1));
            }
            else if(mp.size() < (j-i+1)) {
                mp[s[i]]--;
                if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }
            j++;    
        }
        return count;

    }
};
