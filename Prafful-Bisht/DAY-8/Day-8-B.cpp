class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
         // linear time algo O(N)
       int l =0; int r = nums.size()-1;
       while(l<r){
           int curr = nums[l]+nums[r];
        if(curr>target){
            r--;
        }
        else if(curr<target){
            l++;
        }
        else{
            return {l+1,r+1};
        }
           
       }
       return {-1,-1};
    }
    
};