class Solution {
public:
        /* bool ispal(string s){
          int i=0;int j = s.size()-1;
          while(i<j){
            if(s[i]!=s[j]){
              return false;
            }
            i++;j--;
          }
          return true;
        } */
    bool isStrictlyPalindromic(int n) {
    /* Brute force
      for(int i=2;i<=n-2;i++){
        string ans = "";
        int d =n;
        while(d){
          ans += (to_string(d%i));
          d = d/i;
        }
        if(!ispal(ans)) {return false;}
      }
      return true; */
        


    /**************************Optiaml O(1)********************************/

      return false;
    }
};