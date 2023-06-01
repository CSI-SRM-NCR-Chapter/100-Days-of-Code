class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> res;

        int i=0, j=0;
        
        while (j<n) {
            i = j;
            while (j+1 < n && nums[j]+1 == nums[j+1]) j++;
            
            if (i<j) res.push_back(to_string(nums[i])+"->"+to_string(nums[j]));
            else res.push_back(to_string(nums[i]));

            j++;
        }

        return res;
    }
};
