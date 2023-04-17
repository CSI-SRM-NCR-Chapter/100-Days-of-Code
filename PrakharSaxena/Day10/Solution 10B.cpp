class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
           if(find(nums.begin(),nums.end(),k)!=nums.end()){
               k++;
               continue;
           }
           else return i;
        }
        return nums.size();
    }
};