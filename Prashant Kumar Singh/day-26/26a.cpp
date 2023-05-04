class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=pattern.size(),m=s.size();
        vector<string> ans;
        string str;
        for(int i=0; i<m; i++){
            if(s[i]!=' '){
                str.push_back(s[i]);
            }
            else{
                ans.push_back(str);
                str="";
            }
        }
        ans.push_back(str);
        if(ans.size()!=n){
            return false;
        }
        map<char,string> hash;
        for(int i=0; i<n; i++){
            if(hash.find(pattern[i])==hash.end()){
                hash[pattern[i]]=ans[i];
            }
            else{
                auto it=hash.find(pattern[i]);
                if(it->second!=ans[i]){
                    return false;
                }
            }
        }
        auto it=hash.begin();
        set<string> st;
        for(; it!=hash.end(); it++){
            st.insert(it->second);
        }
        if(st.size()!=hash.size()){
            return false;
        }
        return true;
    }
};
