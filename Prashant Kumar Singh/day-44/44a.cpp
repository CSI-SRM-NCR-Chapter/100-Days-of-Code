class Solution {
public:
    int nthUglyNumber(int& n) {
        vector<int> dp(n,0);
        dp[0] = 1;
        int i = 0, j = 0, k = 0;
        for(int z = 1; z < n; z++){
            dp[z] = min(dp[i]*2,min(dp[j]*3,dp[k]*5));
            if(dp[z]==dp[i]*2)i++;
            if(dp[z]==dp[j]*3)j++;
            if(dp[z]==dp[k]*5)k++;
           
        }
        
        return dp[n-1];
    }
};
