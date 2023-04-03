class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> mp;

        for (auto x: ransomNote){
            mp[x]++;
        }
        for(auto y: magazine){
            mp[y]--;
        }
        for(auto z: mp){
            if(z.second>0) return false;
        }
        return true;
    }
};
