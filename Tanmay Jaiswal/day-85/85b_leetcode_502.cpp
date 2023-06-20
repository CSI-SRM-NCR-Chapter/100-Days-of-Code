class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int, int>> mp;

        for (int i=0; i<n; i++) mp.push_back({capital[i], profits[i]});

        sort(begin(mp), end(mp));

        priority_queue<int> pq;
        int j=0;

        for (int i=0; i<k; i++) {
            while (j<n and mp[j].first <= w) {
                pq.push(mp[j].second);
                j++;
            }

            if (pq.empty()) break;

            w += pq.top();
            pq.pop();
        }

        return w;
    }
};
