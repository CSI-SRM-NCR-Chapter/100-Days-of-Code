class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                maxi=max(maxi,temp);
                temp=0;
            }
            else if(nums[i]==1){
                temp++;
            }
        }
        return max(maxi,temp);
    }
};
