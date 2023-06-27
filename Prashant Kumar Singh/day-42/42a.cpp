class Solution{
public:
    vector<int> searchRange(vector<int>& nums, int target){
        int start = 0, end = nums.size()-1;
        vector<int> ans{-1,-1};

        while(start <= end){
            int mid = (start + end)/2;
            if(target < nums[mid]) end = mid - 1;
            else if(target > nums[mid]) start = mid + 1;
            else{
                ans[0] = mid;
                end = mid - 1;
            }
        }

        start = 0, end = nums.size()-1;
        while(start<=end){
            int mid = (start + end)/2;
            if(target < nums[mid]) end = mid - 1;
            else if(target > nums[mid]) start = mid + 1;
            else{
                ans[1] = mid;
                start = mid + 1;
            }
        }

        return ans;
    }
};
