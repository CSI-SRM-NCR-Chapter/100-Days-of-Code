class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        int i=0;
        int maxi =0;
        while(i<nums.size()){
            if(nums[i]==1){
                j++;
            }
            else{
                j=0;
            }
            maxi = max(j,maxi);
            i++;
            
        }
        return maxi;
    }
};