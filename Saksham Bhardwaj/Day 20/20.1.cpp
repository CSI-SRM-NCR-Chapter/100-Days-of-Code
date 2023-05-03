class Solution {
public:
    int countHillValley(vector<int>& nums) 
    {
        int c=0,t=nums[0];
        for(int i=1;i<nums.size()-1;i++)
        {
            if(t==nums[i])
            {
                t=nums[i];
                continue;
            }
            if(nums[i]<t && nums[i]<nums[i+1])
            {
                c++;
                t=nums[i];
            }
            else if(nums[i]>t && nums[i]>nums[i+1])
            {
                c++;
                t=nums[i];
            }
        } 
        return c;   
    }
};
