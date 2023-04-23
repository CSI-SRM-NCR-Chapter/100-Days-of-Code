class Solution {
public:
    int minimumCost(vector<int>& cost) {

        int sum =0;
        sort(cost.begin(),cost.end(),greater<int>());
        int n = cost.size();
        int count =0;
    

    for(int i=0;i<n;i++){
        count++;

        if(count%3 != 0){
            sum += cost[i];
            cout<<sum<<" ";
        }
    }
        return sum;
    }
};
