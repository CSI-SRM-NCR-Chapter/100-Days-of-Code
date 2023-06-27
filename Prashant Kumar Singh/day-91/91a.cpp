class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<long long int> prefix(nums.size()), suffix(nums.size());

        prefix[0] = nums[0];
        for(int i=1; i<nums.size(); i++)
            prefix[i] = prefix[i-1] + nums[i];
 
        suffix[nums.size()-1] = nums[nums.size()-1];
        
        for(int i=nums.size()-2; i>=0; i--)
            suffix[i] = suffix[i+1] + nums[i];
        
        vector<int> ans;
        for(int i=0; i<nums.size(); ++i){
            if(i-k < 0 || i+k >= nums.size()) ans.push_back(-1);
            else{
                long long int sum = (long long int)((suffix[i-k] - suffix[i]) + (prefix[i+k] - prefix[i]) + nums[i]);
                sum = sum / (2*k+1);
                ans.push_back(sum);
            }
        }
        return ans;
    }
};
