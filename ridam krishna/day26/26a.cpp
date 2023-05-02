class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> word;
        int i=0;
        string temp="";
        while(i<s.length()){
            if(i==s.length()-1){
                temp.push_back(s[i]);
                word.push_back(temp);
            }
            if(s[i]==' '){
                word.push_back(temp);
                temp="";
            }
            else{
                temp.push_back(s[i]);
            }
            i++;
        }

        if(pattern.size()!=word.size()) return false;

        unordered_map<char,string> mp;
        unordered_map<string,char> mp1;

        for(int i=0; i<pattern.length(); i++){
            if(mp.find(pattern[i])==mp.end() and mp1.find(word[i])==mp1.end()){
                mp[pattern[i]]=word[i];
                mp1[word[i]]=pattern[i];
            }
            
            else{
                if(mp.find(pattern[i])!=mp.end() and mp[pattern[i]]!=word[i]) return false;
                if(mp1.find(word[i])!=mp1.end() and mp1[word[i]]!=pattern[i]) return false;
            };
        }
        return true;
    }
};
