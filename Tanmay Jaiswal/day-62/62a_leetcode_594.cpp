class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size()==0) return 0;

        sort(nums.begin(), nums.end());
        
        int i=0,r=0;
        while(i<nums.size()) {
            int seen=0;
            int low=i;
            int next=i+1;

            while(i<nums.size() && nums[i]==nums[low]) i++;
            next=i;
            while(i<nums.size() && nums[i]==nums[low]+1) i++;
            
            if (i!=low && nums[i-1]-nums[low]==1) seen+=(i)-low;

            r=max(r, seen);
            i=next;
        }

        return r;
    }
};
