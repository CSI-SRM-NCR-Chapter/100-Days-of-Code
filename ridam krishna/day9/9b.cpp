class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int i=0, count=0, n1;
        int n= s.length();
        for(auto x: strs){
            n1=x.length();
            for(i=0; i<min(n,n1); i++){
                if(s[i]==x[i]) count++;
                else break;
            }
            n=count;
            count=0;
        }
        return s.substr(0,n);
    }
};
