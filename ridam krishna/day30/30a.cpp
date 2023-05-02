class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(begin(cost), end(cost), greater<int>());
        int sum=0;
        int temp=0;
        int i=0;
        int count=0;
        for(i=0; i<cost.size(); i++){
            if(count==2){
                count=0;
                temp=temp+sum;
                sum=0;
                continue;
            }
            count++;
            sum+=cost[i];
            if(i==cost.size()-1) temp=temp+sum;
        }
        return temp;
    }
};
