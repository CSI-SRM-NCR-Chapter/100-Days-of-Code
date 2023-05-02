class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        int sum=0;
        for(auto x: stones){
            mp[x]++;
        }
        int i=0;
        for(i=0; i<jewels.size(); i++){
            if(mp.find(jewels[i])!=mp.end()) sum=sum+mp[jewels[i]];
        }
        // cout<<mp[jewels[2]];
        return sum;
        
    }
};
