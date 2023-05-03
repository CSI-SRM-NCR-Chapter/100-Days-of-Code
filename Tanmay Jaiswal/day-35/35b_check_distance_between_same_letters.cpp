class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int> f;

        for (int i=0; i<s.size(); i++) {
            if (f.find(s[i]) == f.end()) f[s[i]] = i;
            else {
                if (distance[s[i]-'a'] != i-f[s[i]]-1) {
                    return false;
                }
            }
        }
        
        return true;
    }
};
