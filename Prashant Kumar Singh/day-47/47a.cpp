class Solution {
public:
    int findPoisonedDuration(vector<int>& time,int d){
        int ans = 0;
        for(int i = 0; i< time.size()-1; i++){
            if(time[i]+d < time[i+1]) ans+=d;
            else ans += time[i+1] - time[i];
        }
        return ans+d;
    }
};
