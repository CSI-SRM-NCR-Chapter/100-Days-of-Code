class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = (start + end)/2;
        while(start <= end){
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) start = mid+1;
            else end = mid-1;
            mid = (start + end)/2;
        }
        return start;
    }
};
