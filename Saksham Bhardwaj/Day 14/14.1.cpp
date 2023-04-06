class Solution {
    bool good(string &s, string &p) {
        int n = p.size();
        for(int i=0; i<n; i++) {
            if(p[i] == 'I' && s[i] > s[i + 1]) return false;
            else if(p[i] == 'D' && s[i] < s[i + 1]) return false;
        }
        return true;
    }

    void dfs(int i, string &s, string &pattern, string &ans) {
        if(i == s.size() - 1) {
            if(good(s, pattern)) ans = min(ans, s);
            return;
        }
        for(int j=i; j<s.size(); j++) {
            swap(s[i], s[j]);
            dfs(i + 1, s, pattern, ans);
            swap(s[i], s[j]);
        }
    }
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        string s, ans = "99999999";
        for(int i=1; i<=n+1; i++) s += to_string(i);

        dfs(0, s, pattern, ans);
        return ans;
    }
};
