class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i: nums){
            if(mp.find(i)==mp.end()){
                mp[i]=1;
            }
            else {
                return 1;
                // mp[i]++;
            }
        }

        return 0;
    }
};
