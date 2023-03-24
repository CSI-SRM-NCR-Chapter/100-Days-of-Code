// https://leetcode.com/problems/single-number/
 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number = 0;
        // x ^ x = 0
        // All non repeating numbers make zero and 0 ^ n = n
        for(int i = 0; i < nums.size(); ++i) {
            number ^= nums[i];
        }
        return number;
    }
};
