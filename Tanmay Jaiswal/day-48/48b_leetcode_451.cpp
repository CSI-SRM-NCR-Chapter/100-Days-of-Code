class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto x:s) mp[x]++;
        
        sort(s.begin(), s.end(), [&](int a,int b) {
            if (mp[a] != mp[b]) return mp[a] > mp[b];
            return a < b;
        });

        return s;
    }
};
