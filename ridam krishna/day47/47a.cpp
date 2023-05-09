class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        int res=0;
        if(n==1) return duration;
        for(int i=0; i<n; i++) {
            if(i+1<n)
                if(timeSeries[i+1]>timeSeries[i]+duration-1) res=res+duration;
                else res=res+timeSeries[i+1]-timeSeries[i];
            else res=res+duration;
        }
        return res;
    }
};
