class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            char x=s[i];
            mp[x]++;
        }
        for(auto x: t){
            if(mp.find(x)==mp.end()){ //if the character doesnt present in map then it will be eq to the end address of map which is null pointer.
            return false;
            }
            else mp[x]--;
        }
        for(auto x: mp)
            if(x.second!=0)
                return false ;
       
        return 1;
    }
};
