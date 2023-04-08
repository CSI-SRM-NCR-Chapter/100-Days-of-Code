class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0], count = 1;
        for(unsigned int i=1; i < nums.size(); i++)
        {
            if(nums[i]==maj) count++;
            else count--;
            if(count==0) {maj = nums[i]; count++;}
        }
        return maj;
    }
}; //Day 5.1

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto e: nums)
        {
            mp[e]++;
            if(mp[e]>1) return 1;
        }
        return 0;
    }
}; //Day 5.2