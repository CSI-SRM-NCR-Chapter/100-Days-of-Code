class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int nle = 0;
        int res = 0;

        for (int i=n-1; i>=0; i--) {
            res = max(res, nle-prices[i]);
            nle = max(nle, prices[i]);
        }

        return res;
    }
};
