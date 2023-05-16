class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int m, s=0, e=nums.size()-1;
        vector<int> ans(2, -1);
        
        while(s<=e) {
            m = (s+e)/2;
            if(nums[m] > target) e = m-1;
            else if(nums[m] < target) s = m+1;
            else break;
        }
        
        if(s>e) {
            return ans;
        }
        
        int mid1 = m, mid2 = m;
        
        while(mid1 >= 0) {
            if(nums[mid1] == target) ans[0] = mid1;
            else break;
            mid1--;
        }
        
        while(mid2 < nums.size()) {
            if(nums[mid2] == target) ans[1] = mid2;
            else break;
            mid2++;
        }
        
        return ans;
    }
};
