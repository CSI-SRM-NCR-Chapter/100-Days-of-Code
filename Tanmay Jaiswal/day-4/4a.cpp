class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        for (int i=0; i<n;) {
            int j = i+1;
            while (j<n and nums[i]==nums[j]) {
                j++;
            }

            if (k<n and j<n) nums[k++] = nums[j];
            i = j;
        }

        return k;
    }
};
