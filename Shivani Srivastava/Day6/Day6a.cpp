class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp1;
        map<char,int> mp2;
        for(auto i: s){
            mp1[i]++;
        }
        for(auto i:t){
            mp2[i]++;
        }
        if(mp1==mp2){
            return true;
        }
        else{
            return false;
        }

    }
};