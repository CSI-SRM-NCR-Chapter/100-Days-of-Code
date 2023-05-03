class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(begin(cost), end(cost));
        
        int n = cost.size();
        int ans = 0;
        int i = n-1;

        while (i>0) {
            ans += cost[i] + cost[i-1];
            i -= 3;
        }

        if (i==0) ans += cost[i];

        return ans;
    }
};
