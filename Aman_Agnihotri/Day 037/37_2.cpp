class Solution {
public:
    int minTimeToType(string word) {
        unordered_map<char,int>m;
        int k=0;
        for(char x='a';x<='z';x++)
        {
            m[x]=k;
            k++;
        }
      
        int ans=0;
        int t=abs(m['a']-m[word[0]]);
        ans=ans+min(t,26-t)+1;
       
        for(int i=1;i<word.length();i++ )
        {
            int t=abs(m[word[i-1]]-m[word[i]]);
            ans=ans+min(t,26-t)+1;
            
        }
        return ans;
    }
};