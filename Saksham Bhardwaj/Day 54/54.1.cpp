class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
vector<int> s;
    sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++){
 if(nums[i]>target){
          break;
      }
      if(nums[i]==target){
          s.push_back(i);
      }
     
      }  
    
   return s; }
};
