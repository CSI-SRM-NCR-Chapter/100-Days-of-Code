class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        
        vector<int> freq1(26,0),freq2(26,0);
        
        for(int i=0;i<s.length();i++)
        {
            freq1[s[i]-'a']++;
            freq2[t[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])return false;
        }
        
        return true;
    }
};
