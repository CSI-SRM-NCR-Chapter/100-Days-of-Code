class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniquecount = 1;
        for (int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[uniquecount] = nums[i];
                uniquecount += 1;
            }
        }
        return uniquecount;
    }
};
