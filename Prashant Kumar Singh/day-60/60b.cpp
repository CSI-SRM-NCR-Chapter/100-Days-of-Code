class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int size = nums.size();
        if (size==0) 
            return ans;
        
        for (int i = 0; i < size;){
            
            int low = i, hi = i;
            // traversing the array nums while array is contionus
            // loop will break when nums[hi]+1!= nums[hi+1]
            while (hi + 1 < size && nums[hi+1] == nums[hi] + 1) 
                hi++;
            //checking if it a single elemnt or not
            if (hi > low) 
                ans.push_back(to_string(nums[low]) + "->" + to_string(nums[hi]));
            else 
                ans.push_back(to_string(nums[hi]));
            // increment  i by hi+1 
            i = hi+1;
        }
        return ans;
        
    }
};
