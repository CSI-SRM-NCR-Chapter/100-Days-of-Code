class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x^y);
    }
};  // Day 11.1

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0;
        for(int i=0;i<nums.size(); i++)
        {
            int ct = 0;
            if(nums[i])
            {
                while(i<nums.size() && nums[i])
                {
                    ct++; i++;
                }
            }
            mx = max(mx,ct);
        }
        return mx;
    }
};  // Day 11.2