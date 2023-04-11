class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
                ans=max(count,ans);
            }
            else count=0;
        }
        return ans;
    }
};
