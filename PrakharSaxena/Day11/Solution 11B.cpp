class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=-1,count=0,i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else {
                    if(ans<count){
                        ans=count;
                    }
                    count=0;
                }
            }
        if(ans<count){
            ans=count;
        }
        return ans;
    }
};