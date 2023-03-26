// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pen = 0;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] != nums[pen]){
                ++pen;
                nums[pen] = nums[i];
            }
        }

        return pen+1;
    }
};
