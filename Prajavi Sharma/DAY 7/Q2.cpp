class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
            }
            
        }
        for(int i=v.size();i<nums.size();i++){
            v.push_back(0);
            
        }
        nums=v;
            }
};
