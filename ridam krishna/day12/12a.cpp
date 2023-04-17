class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char, int> mp;
        for(auto x: s){
            mp[x]++;
        }
        for(auto x: t){
            mp[x]--;
        }
        for(auto y: mp){
            if(y.second==-1){
                return y.first;
            }
        }

        return -1;
    }
};
