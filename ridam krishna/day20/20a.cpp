class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int hill=0;
        int valley=0;
        int j=0;
        auto temp=unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),temp));
        // for(auto x: nums){
        //     cout<<x<<" ";
        // }
        for(int i=1; i<nums.size()-1;i++){
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1]){
                hill++;
                // i++;
            }
            if(nums[i-1]>nums[i] && nums[i]<nums[i+1]){
                valley++;
                // i++;
            }
        }
        return (hill+valley);
    }
};
