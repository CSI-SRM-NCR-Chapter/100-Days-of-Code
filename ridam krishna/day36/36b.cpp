class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";
        unordered_map<char, int> mp;
        for(auto x: t){
            mp[x]++;
        }
        int count=0;
        int start=0;
        int min_length=INT_MAX;
        int min_start=0;

        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]>0){
                count++;
            }
            mp[s[i]]--; 
            if(count == t.length()) { 
                while(start < i && mp[s[start]] < 0){
                    mp[s[start]]++, start++;
                } 
                if(min_length > i-start){
                    min_length = i-(min_start=start)+1; 
                }
                mp[s[start++]]++; 
                count--;
            }
        }
        return min_length == INT_MAX ? "" : s.substr(min_start, min_length);
    }
};
