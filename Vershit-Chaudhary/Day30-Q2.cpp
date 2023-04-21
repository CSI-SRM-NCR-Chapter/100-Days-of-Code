class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i;
        vector<int> neg_arr;
        vector<int> pos_arr;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]<0)
            {
                neg_arr.push_back(nums[i]);
            }
            else
            {
                pos_arr.push_back(nums[i]);
            }
        }
        nums.clear();
        for(i=0 ; i<pos_arr.size() ; i++)
        {
            nums.push_back(pos_arr[i]);
            nums.push_back(neg_arr[i]);
        }
        return nums;
    }
};
