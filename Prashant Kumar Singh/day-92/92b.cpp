class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int &i:nums)
            mp[i]++;
            
        for(int i = 0; i<32; i++){
            if(!mp.count(1<<i)) return 1<<i;
        }
        return 1<<32;
    }
};
