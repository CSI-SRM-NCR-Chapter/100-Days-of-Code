class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int ans = 0;

        if(n == 1) return duration;

        for(int i=0; i < n; i++) {
            if(i+1 < n)
                if(timeSeries[i+1] > timeSeries[i] + duration - 1) ans += duration;
                else ans += timeSeries[i+1] - timeSeries[i];
                
            else ans += duration;
        }

        return ans;
    }
};
