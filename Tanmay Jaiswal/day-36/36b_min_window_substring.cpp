class Solution {
public:
    string minWindow(string s, string t) {

        int n = s.size();
            
        unordered_map<char, int> freq, mp;
        for (const char &i: t) freq[i]++;

        int start = 0;
        int have = 0, need = freq.size();
        pair<int, int> ans = {-1, 1e9}; // {start_index, length}

        for(int end=0; end<n; end++) {
            char x = s[end];
            mp[x]++;

            if ((freq[x] > 0) && (mp[x] == freq[x])) have++;

            while (have == need) {
                if (end-start+1 < ans.second) ans = {start, end-start+1};
                if ((freq[s[start]] > 0) && (mp[s[start]]-1 < freq[s[start]])) have--;

                mp[s[start++]]--;
            }
        }

        return (ans.first >= 0 ? s.substr(ans.first, ans.second) : "");
    }
};
