class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i=0,j=0,n;
        n= s.length();
        int count = 0,maxCount = 0;

        unordered_map<char,int> mp;

        while(j<n) {
            mp[s[j]]++;

            if(mp.size() == j-i+1) {    //Comparing the size of the map with the window size
                maxCount = max(maxCount,(j-i+1));
            }

            else if(mp.size() < (j-i+1)) {
                mp[s[i]]--;
                if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return maxCount;
    }
};