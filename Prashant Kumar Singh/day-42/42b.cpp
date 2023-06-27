class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, mid;
        while(start <= end){
            mid = (start + end)/2;
            if(target < nums[mid]) end = mid-1;
            else if(target > nums[mid]) start = mid+1;
            else return mid;
        }
        return start;
    }
};
