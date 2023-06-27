class Solution {
    vector<vector<int>> dp;
public:
    int maxProfit(vector<int>& prices, int fee) {
        dp = vector<vector<int>> (int(prices.size())+1, vector<int>(2, -1));
        return helper(prices, fee, 0, 1);
    }

    int helper(vector<int>& prices, int & fee, int i, int buy) {
        if (i==prices.size()) return 0;
        if (dp[i][buy] != -1) return dp[i][buy];

        if (buy) {
            int x = helper(prices, fee, i+1, 0) - prices[i] - fee;
            int y = helper(prices, fee, i+1, 1);
            return dp[i][buy] = max(x, y);
        }

        int x = helper(prices, fee, i+1, 1) + prices[i];
        int y = helper(prices, fee, i+1, 0);
        return dp[i][buy] = max(x, y);
    }
};
