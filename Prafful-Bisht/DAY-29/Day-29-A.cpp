class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count=0;
        unordered_map<char,int>mp;
        for(int i=0;i<jewels.length();i++){
            mp.emplace(jewels[i],1);
        }
        for(char c : stones){
            auto it =mp.find(c);
            if(it != mp.end() && it->second==1){
                count++;
            }
        }
        return count;
    }
};