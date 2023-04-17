class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), x = n;
        for(int i=0; i<n; i++){
            x ^= i;
            x ^= nums[i];
        }
        return x;
    }
};
