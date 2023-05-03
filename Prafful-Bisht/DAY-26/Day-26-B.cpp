class Solution {
public:

    vector<vector<int>> t;

    int lengthOfLIS(vector<int>& nums) {
        t = vector<vector<int>> (nums.size()+1, vector<int>(nums.size()+1, -1));
        return cal(nums, 0, -1);
    }

    int cal(vector<int>& arr, int curr, int prev) {
        if (curr == arr.size()) return 0;
        if (t[curr][prev+1] != -1) return t[curr][prev+1];

        int ans = cal(arr, curr + 1, prev); 
        if (prev == -1 or arr[prev] < arr[curr]) ans = max(ans, cal(arr, curr + 1, curr) + 1); 

        return t[curr][prev+1] = ans;
    }
};