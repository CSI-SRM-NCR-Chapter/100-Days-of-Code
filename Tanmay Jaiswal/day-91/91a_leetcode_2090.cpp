class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int len = k+k+1;

        vector<int> res(n, -1);
        long long sum = 0;
        int j = 0;

        for (int i=0; i<n; i++) {
            sum += nums[i];
            if (i-j+1 > len) sum -= nums[j++];
            if (i-j+1 == len) res[k+j] = sum/len;
        }

        return res;
    }
};
