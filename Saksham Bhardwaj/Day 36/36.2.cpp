class Solution {
public:
    string minWindow(string s, string t) {
        int i=0,j=0;
        int ans=INT_MAX;
        map<char,int>mp;
//store elements in map
        for(auto i:t){
            mp[i]++;
        }
        int start=0;
        int count = mp.size();
        while(j < s.size()){
//decrease occurence of jth element
                mp[s[j]]--;

            if(mp[s[j]] == 0){
                count--;
            }
//window achieved
            if(count == 0){
//lets optimise it 
                while(count == 0){
//update ans to min window 
                    if (ans > j-i+1) {
                        ans = j-i+1;
                        start=i;
                    }
//after removing ith --> increase its count becoz its removed
                        mp[s[i]]++;
//now check for count need to be update or not
                        if(mp[s[i]] > 0){
                            count++;
                        }
                    
                    i++;
                }
                
            }
            j++;
        }
//return the needed output
        if(ans != INT_MAX){
            return s.substr(start,ans);
        }
        return "";
    }
};
