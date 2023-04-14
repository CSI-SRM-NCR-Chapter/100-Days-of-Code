class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        // fill(map.begin(),map.end(),0);
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for (auto i:mp) {
            if (i.second > n/2) return i.first;
        }

        return -1;
    }
};
