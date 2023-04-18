class Solution {
public:
     vector<vector<string>> ans;
     bool palindrome(string s,int start,int end ){
         while(start<end){
             if(s[start++] != s[end--]){return false;}
         }
         return true;
     }
     void recursion(string s,vector<string>&temp,int index ){
        if(index == s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(palindrome(s,index,i)){
                temp.push_back(s.substr(index,i-index+1));
                recursion(s,temp,i+1);
                temp.pop_back();
            }
        }
     }
    vector<vector<string>> partition(string s) {
       vector<string> temp;
        recursion(s,temp,0);
        return ans;
    }
};
