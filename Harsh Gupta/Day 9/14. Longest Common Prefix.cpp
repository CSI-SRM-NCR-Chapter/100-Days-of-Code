class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i = 1; i< strs.size(); i++){
            for(int j = 0; j<ans.length(); j++){
                if(ans[j]!=strs[i][j]){
                   ans = ans.substr(0,j);
                }
            }
            if(ans.length()==0){
                return "";
            }
        }
        return ans;
    }
}; 
