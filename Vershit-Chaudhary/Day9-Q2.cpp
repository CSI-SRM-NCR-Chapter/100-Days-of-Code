#include<string.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l=strs.size();
        int count=0;
        int len=strs[0].length();
        string res;
        for(int i=0;i<len;i++){
            for(int j=0;j<l;j++){
                if(j==l-1 && strs[0][i]==strs[j][i]){
                    res.push_back(strs[0][i]);
                }
                else{
                    if(strs[0][i]==strs[j][i]){
                        continue;
                    }
                    else{
                        return res;
                    }
                }
            }
        }
        return res;
    }
};
