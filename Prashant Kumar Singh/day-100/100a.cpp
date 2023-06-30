class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        priority_queue<int> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;
        for(int i=0; i<weights.size()-1; i++){
            pq1.push(weights[i] + weights[i+1]);
            pq2.push(weights[i] + weights[i+1]);
            if(pq1.size() > k-1){
                pq1.pop();
                pq2.pop();
            }
        }
        long long int res1 = 0, res2 = 0;
        while(!pq1.empty()){
            res1 += pq1.top();
            res2 += pq2.top();
            pq1.pop();
            pq2.pop();
        }
        return res2-res1;
    }
};
