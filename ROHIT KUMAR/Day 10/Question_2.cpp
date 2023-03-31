class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       vector<bool> check(n, false);
        for(int i=0;i<nums.size();i++){
            check[nums[i]] = true;
        }
        for(int i = 0; i  < n ; i++){
            if(! check[i]) return i;
        }
        return n;
    }
};
