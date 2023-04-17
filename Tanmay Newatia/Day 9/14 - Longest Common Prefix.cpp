class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0],end=strs[n-1],ans="";
        for(int i=0;i<min(first.size(),end.size());i++){
            if(first[i]!=end[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};

/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            string nprefix="";
            for(int j=0;j<min(strs[i].size(),prefix.size());j++){
                if(strs[i][j]==prefix[j]){
                    nprefix+=prefix[j];
                }
                else{
                    break;
                }
            }
            prefix=nprefix;
        }
        return prefix;
    }
};*/