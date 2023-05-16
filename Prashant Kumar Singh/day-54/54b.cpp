class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++ ){
                if(nums[j] - nums[i] == k){
                    count ++;
                }
                if(nums[j] - nums[i] > k){
                    break;
                }
            }
        }
        return count;
    }
};
