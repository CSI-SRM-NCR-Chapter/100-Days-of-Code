class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=0;
        for(auto i:mp){
            if(i.second>nums.size()/2 && i.second>ans){
                ans=i.first;
            }
        }
        return ans;
    }
};