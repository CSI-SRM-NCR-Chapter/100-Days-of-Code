class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int count = 0;
        int n = cost.size();
        int i = n-1;
         if(n <= 2){
            for(auto x: cost) 
                count += x;
            return count;
        }
        while(i >= 1){
            count += cost[i] + cost[i-1];
            if(i-1 == 0 || i-1 == 1) return count;
            i = i-3;
        }
        count += cost[0];
        return count;
    }   
};
