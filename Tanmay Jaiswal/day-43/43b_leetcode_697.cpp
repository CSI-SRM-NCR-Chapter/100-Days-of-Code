class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        int n = nums.size(), maxf = 0;
        unordered_map<int, int> freq, lastIdx, firstIdx;

        for (int i=0; i<n; i++) {
            maxf = max(maxf, ++freq[nums[i]]); // maxf -> stores max frequency
            // firstIdx maps to first occurred index of nums[i]
            if (firstIdx.find(nums[i]) == end(firstIdx)) firstIdx[nums[i]] = i;
            lastIdx[nums[i]] = i; // lastIdx stores last index of nums[i]
        }
        
        int ans = n;
        for (int i=0; i<n; i++)
            if (freq[nums[i]] == maxf)
                ans = min(ans, lastIdx[nums[i]]-firstIdx[nums[i]]+1);

        return ans;
    }
};
