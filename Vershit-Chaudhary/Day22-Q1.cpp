class Solution {
public:
    int lengthOfLastWord(string s) {
       int l=s.length(),count=0;
       bool flag=false;
       for(int i=l-1;i>=0;i--){
           if(s[i]==' ' && s[i+1]!=' ' && flag){
               return count;
               break;
           }
           else if(s[i]!=' '){
               flag=true;
               count++;
           }
       } 
       return count;
    }
};
