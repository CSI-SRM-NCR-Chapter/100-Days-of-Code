class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int miss = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        nums.push_back(0);
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != nums[i])
            {
                miss = i;
                break;
            }
        }
        return miss;
    }
};