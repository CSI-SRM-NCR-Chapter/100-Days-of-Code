class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int maxf = 0;
        unordered_map<int, int> freq, lastIdx, firstIdx;
        for (int i=0; i<nums.size(); i++) {
            maxf = max(maxf, ++freq[nums[i]]);
            if (firstIdx.find(nums[i]) == end(firstIdx)) firstIdx[nums[i]] = i;
            lastIdx[nums[i]] = i;
        }
        
        int ans = nums.size();
        for (int i=0; i<nums.size(); i++)
            if (freq[nums[i]] == maxf) ans = min(ans, lastIdx[nums[i]]-firstIdx[nums[i]]+1);

        return ans;
    }
};
