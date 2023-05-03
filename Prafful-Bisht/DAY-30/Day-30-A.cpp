class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
    int i = cost.size() - 1;
    int sum = 0;
    
    while (i > 1) {
    sum+=cost[i--];
    sum+=cost[i--];
    i--;
    }
    while(i>=0){
        sum += cost[i--];
    }
    return sum;

    }
};