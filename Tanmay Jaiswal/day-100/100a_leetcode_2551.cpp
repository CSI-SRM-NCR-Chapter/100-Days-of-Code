class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<long long> arr;
        for (int i=1; i<n; i++) {
            arr.push_back(1LL*weights[i]+1LL*weights[i-1]);
        }

        sort(begin(arr), end(arr));

        long long res = 0;
        for (int i=0; i<k-1; i++) {
            res += arr[n-i-2] - arr[i];
        }

        return res;
    }
};
