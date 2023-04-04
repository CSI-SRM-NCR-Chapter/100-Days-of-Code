class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int> a;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                sum=nums[j]+nums[i];
                if(sum==target){
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return a;
    }
};
