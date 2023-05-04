class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int p=pattern.size(),n=s.size()+1;
        s+=' ';
        string str="";
        vector<string> res;
        for(int i=0;i<n;i++){
            (s[i]!=' ')?str+=s[i]:(res.push_back(str),str="");
        }
        if(res.size()!=p){return false;}
        for(int i=0;i<p-1;i++){
            for(int j=i+1;j<p;j++){
                if(pattern[i]==pattern[j] && res[i]==res[j]){
                    continue;
                }
                else if(pattern[i]!=pattern[j] && res[i]!=res[j]){
                    continue;
                }
                else{
                    return false;
                    break;
                }
            }
        }
        return true;
    }
};
