class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        for(auto x: s){
            mp[x]++;
        }
        for(int i=0; i<s.length(); i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
