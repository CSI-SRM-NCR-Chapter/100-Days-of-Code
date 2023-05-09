// https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
      vector<string>y;
      string t="";
      for(int i=0;i<s.length();i++) {
          if(s[i]!=' ') {
                t+=s[i];
            }
           if((s[i]==' ' && t!="" )|| (i==s.length()-1 && s[i]!=' ')) {
                y.push_back(t);
                t="";
            }
      }  
      string ans="";
      bool l=true;
        for(int i=y.size()-1;i>=0;i--) {
             if(i==y.size()-1) {
                 ans+=y[i];
             } 
             else {
                  ans+=' '+y[i];   
             }
        }
        return ans;
    }
};
