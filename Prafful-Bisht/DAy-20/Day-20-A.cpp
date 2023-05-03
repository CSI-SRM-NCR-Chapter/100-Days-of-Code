
        class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]<nums[i-1]&&nums[i]<nums[i+1]){
                ans++;
            }
            else if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                ans++;
            }
        }
        return ans;
    }
};
