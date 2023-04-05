class Solution {
public:

    bool isPalindrome(string & s, int start, int end){
        int last = end;
        for(int i=start; i < last; i++){
            if(s[i] != s[last]) return false;
            last--;
        }
        return true;
    }

    void solve(int pos, string & s, vector<string> & v1, vector<vector<string>>& v2, int n){
        if(pos == n){
            v2.push_back(v1);
            return;
        }
        for(int i=pos; i<n; i++){
            if(isPalindrome(s, pos, i)){
                v1.push_back(s.substr(pos, i-pos+1));
                solve(i+1, s, v1, v2, n);
                v1.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string>v1;
        vector<vector<string>>v2;
        int n = s.size();
        solve(0, s, v1, v2, n);
        return v2;
    }
};
