class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int ans=0,n=cost.size();
        if(n<=2){
            return accumulate(cost.begin(),cost.end(),0);
        }
        for(int i=n-1;i>=0;i-=3){
            if(i==0 || i==1){
                ans+=accumulate(cost.begin(),cost.begin()+i+1,0);
            }
            else{
                ans+=cost[i]+cost[i-1];
            }
        }
        return ans;
    }
};
