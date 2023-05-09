class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto x: s){
            mp[x]++;
        }
        sort(begin(s),end(s),[&](int x,int y){
            if(mp[x]!=mp[y])return mp[x]>mp[y];
            return x<y;
        });
        return s;
    }
};
