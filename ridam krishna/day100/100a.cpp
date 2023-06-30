class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n=weights.size();
        if(n==1 or n==k) return 0;

        vector<int> score;
        long long int mx=0;
        long long int mn=0;

        for(int i=1; i<n; i++) score.push_back(weights[i-1]+weights[i]);
        int x=score.size();
        sort(begin(score), end(score));
        
        for(int i=0; i<k-1; i++){
            mn+=score[i];
            mx+=score[x-1-i];
        }
        return mx-mn;
    }
};
