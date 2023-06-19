class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int nextLargestElement = 0;
        int result = 0;
        for (int i=prices.size()-1; i>=0; i--) {
            result = max(result, nextLargestElement-prices[i]);
            nextLargestElement = max(nextLargestElement, prices[i]);
        }
        return result;
    }
};
