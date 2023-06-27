class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rightSum = 0, leftSum = 0;
        for(auto &i: nums) leftSum += i;
        vector<int> ans;
        for(auto &i: nums){
            leftSum -= i;
            ans.push_back(abs(leftSum-rightSum));
            rightSum += i;
        }
        return ans;
    }
};
