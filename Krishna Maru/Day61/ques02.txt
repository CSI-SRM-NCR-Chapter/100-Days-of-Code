class Solution {
public:
    bool isVowel(char i){
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or
               i=='A' or i=='E' or i=='I' or i=='O' or i=='U'){
                   return true;
               }
            return false;
    }
    string reverseVowels(string s) {
        
      int i=0, j=s.size()-1;

      while(i<j){

          if(isVowel(s[i]) and isVowel(s[j])){
              if(s[i]==s[j]){
                  j--;
                  i++;
              }
              else{
                  swap(s[i],s[j]);
                  i++;j--;
              }
          }
          else if(isVowel(s[i]) and !isVowel(s[j])){
              j--;
          }
          else{
              i++;
          }
      }
      return s;
    }
};