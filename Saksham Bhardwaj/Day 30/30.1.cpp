class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int purchasedCount=0;
        int totalCost=0;
        for(int i=cost.size()-1;i>=0;i--){
            if(purchasedCount!=0 && purchasedCount%2==0){
                purchasedCount=0;
                continue;
            }
            else{
                totalCost+=cost[i];
                purchasedCount++;
            }
        }
        return totalCost;
    }
};
