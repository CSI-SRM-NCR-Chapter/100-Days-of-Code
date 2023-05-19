class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size(), maxFreq = 0, ans = n;
        unordered_map<int, int> freq, left, right;
        // Find the frequency of each number and the maximum frequency
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
            maxFreq = max(maxFreq, freq[nums[i]]);
            // Record the leftmost and rightmost indices for each number
            if(left.find(nums[i]) == left.end())    left[nums[i]] = i;
            right[nums[i]] = i;
        }
        // Find the minimum length subarray
        for(auto& p : freq)
            if(p.second == maxFreq)
                ans = min(ans, right[p.first] - left[p.first] + 1);
        return ans;
    }
};
