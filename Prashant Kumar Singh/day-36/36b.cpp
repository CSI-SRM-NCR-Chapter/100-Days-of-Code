class Solution {
public:
    string minWindow(string s, string t) {
        
       int start = 0;
       int end = -1;
       int m = s.size();
       int n = t.size();
       unordered_map<char,int> mp;
       for(int i=0; i<n; i++)
       mp[t[i]]++;

       int count =  mp.size();
       string res="";

       if(m < n)
       return res;
       if(s == t)
       return s;

       int ans = INT_MAX;
       int temp = 0;
       while(end < m){
           if(count != 0){
               end++;
               if(mp.find(s[end]) != mp.end()){
                   mp[s[end]]--;
                   if(mp[s[end]] == 0)
                   count--;
               }
           }
           while(count == 0 && start < m){
               if(ans > (end - start) + 1){
                   ans = (end - start) + 1;
                   temp = start;
               }
               if(mp.find(s[start]) != mp.end()){
                   mp[s[start]]++;
                   if(mp[s[start]] > 0)
                   count++;
               }
               start++;
           }
       }
       if(ans == INT_MAX)
       return "";
       return s.substr(temp,ans);

    }
};
