class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        
        priority_queue< pair<int, int>, vector<pair<int,int>> > pq;
        for (int i=0; i<n; i++) pq.push({score[i], i});

        vector<string> res(n);
        while (!pq.empty()) {
            auto x = pq.top();
            int size = pq.size();
            res[x.second] = (size == n? "Gold Medal": (size == n-1? "Silver Medal": (size == n-2? "Bronze Medal": to_string(n-size+1))));
            pq.pop();
        }

        return res;
    }
};
