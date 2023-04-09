class Solution {
public:
    int trap(vector<int>& nums) {
        vector<int> left(nums.size(),0), right(nums.size(),0);
        int ans = 0;
        for(int i=nums.size()-2; i>=0; i--){
            right[i]=max(right[i+1], nums[i+1]);
        }
        for(int i=1; i<nums.size(); i++){
            left[i]=max(left[i-1], nums[i-1]);
        }
        for(int i=1; i<nums.size()-1; i++) {
            ans+=max(0, min(left[i], right[i])-nums[i]);
        }
        return ans;
        
    }
};
