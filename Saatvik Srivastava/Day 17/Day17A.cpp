class Solution {
public:
    int firstUniqChar(string s) {
        int ans =-1;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i])==0)
                mp[s[i]] = 1;
            else
                mp[s[i]]++;
            
        }
        for(int i =0;i<s.length();i++){
            // s.at(i) gives value part
            if(mp[s.at(i)]==1){
            //    return i;
            ans =i;
            break;
            }
                
        }
        return ans;;
    }
};
