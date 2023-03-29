class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int i = 0;
        int a= nums[0];
        for(int j = 1; j<nums.size(); j++){
            if(a==nums[j]){
                continue;
            }
            else{
                nums[++i] = nums[j];
                a = nums[j];
            }
        }
        return i+1;
    }
};
