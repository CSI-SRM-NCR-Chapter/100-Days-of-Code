class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int ptr=0;
        int ans=0;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])==mp.end() or mp[s[i]]==-1){
                mp[s[i]]=i;
            }
            else{
                int index=mp[s[i]];
                while(ptr<index){
                    mp[s[ptr]]=-1;
                    ptr++;
                }
                mp[s[i]]=i;
                ptr=index+1;
            }
            ans=max(ans,i-ptr+1);
        }
        return ans;
    }
};
