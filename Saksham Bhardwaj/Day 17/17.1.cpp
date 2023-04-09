class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
       map<char,int>mp;
       for(int i=0;i<n;i++){
           mp[s[i]]++;
       }
      for(int i=0;i<n;i++){
          if(mp[s[i]]==1){
              return i;
          }
      }
       return -1;
    }
};
