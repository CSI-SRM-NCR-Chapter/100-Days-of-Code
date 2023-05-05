class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int mx=0;
        int mi=INT_MAX;

        for(auto x: nums) mp[x]++;
        for(auto y: mp) mx=max(mx, y.second);

        unordered_map<int, pair<int, int>> mp1;
        for(int i=0; i<n; i++){
            if(mp[nums[i]] == mx){
                if(mp1.find(nums[i])==mp1.end()) mp1[nums[i]]={i,i};
                else mp1[nums[i]].second=i;
            }
        }
        for(auto x: mp1) mi=min((x.second.second-x.second.first)+1, mi);
        return mi;
        
    }
};
