class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buy = 0, sell = -100000; //ntme
        for (int x: prices){
            buy=max(buy, sell + x - fee);
            sell=max(sell, buy - x);
        }
        return buy;
    }
};
