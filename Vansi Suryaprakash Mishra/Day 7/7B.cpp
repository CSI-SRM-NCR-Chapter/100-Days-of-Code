class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int l=nums.size();
      int k=0;
      while(k<l){
          if(nums[k]==0){
              break;
          }
          else{
              k=k+1;
          }
      }  
      int i=k,j=k+1;
      while(i<l && j<l){
          if(nums[j]!=0){
              int temp=nums[i];
              nums[i]=nums[j];
              nums[j]=temp;
              i++;
          }
          j++;
      }
    }
};