class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> sum(32);
        for (auto num: nums) {
            for (int i=0; i<32; i++) {
                bool ith = num & (1<<i);
                if (ith) sum[i]++;
            }
        }
        
        int res = 0;
        for (int i=0; i<32; i++) {
            res += (sum[i]%3) * (1<<i);
        }

        return res;
    }
};
