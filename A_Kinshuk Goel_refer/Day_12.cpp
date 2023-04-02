class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(unsigned int i=0; i<t.size(); i++)
        {
            if(i==t.size()-1) return t[i];
            if(s[i]!=t[i]) return t[i];
        }
        return ' ';
    }
};  // Day 12.1

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpa,mpb;
        for(auto e: ransomNote) mpa[e]++;
        for(auto e: magazine) mpb[e]++;
        for(auto e: ransomNote) if(mpb[e]<mpa[e]) return false;
        return true;
    }
};  // Day 12.2