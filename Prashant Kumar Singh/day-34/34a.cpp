class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size()) return false;

        unordered_map<char, char> mp1, mp2;

        for(int i=0; i<s.size(); i++){
            char a = s[i];
            char b = t[i];

            if(mp1.find(a) == mp1.end() && mp2.find(b) == mp2.end()){
                mp1[a] = b;
                mp2[b] = a;
            }

            else{
                if(mp1[a]==b && mp2[b]==a) continue;
                return false;
            }
        }

        return true;
    }
};
