class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            int curr = arr[i] + arr[j];
            if (curr == k) return {i+1, j+1};
            else if (curr < k) i ++;
            else j --;
        }
        return {0,0};
    }
};
