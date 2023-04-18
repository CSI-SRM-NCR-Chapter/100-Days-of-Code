class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size(), s = 0, r = n;
        for (int i = 0; i < n; i ++) {
            s += arr[i];
            r += i;
        }
        return r - s;
    }
};
