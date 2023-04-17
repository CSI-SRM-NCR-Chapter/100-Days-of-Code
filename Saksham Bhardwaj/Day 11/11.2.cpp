class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        int max = INT_MIN;
        int count = 0;
        for(int i = 0; i < size; i++)
        {
            if (nums[i]==1)
            {
                count++;
            }
            else 
            {
                if (count>max)
                {
                    max = count;
                }
                count = 0;
            }
        }
        if (count > max)
        {
            max = count;
        }
        return max;
    }
};
