class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        int m=min(strs[0].size(),strs[n-1].size());
        string first=strs[0];
        string last=strs[n-1];
        string ans;
        int i=0;
        while(i<m && first[i]==last[i]){
            i++;
            ans=first.substr(0,i);
            
            
        }
        return ans;
           }
};
