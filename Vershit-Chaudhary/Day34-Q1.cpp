class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> temp,temp1;
        for(int i=0;i<s.length();i++){
            if(temp[s[i]] && temp[s[i]]!=t[i]){
                return false;
            }
            if(temp1[t[i]] && temp1[t[i]]!=s[i]){
                return false;
            }
            temp[s[i]]=t[i];
            temp1[t[i]]=s[i];
        }
        return true;
    }
};
