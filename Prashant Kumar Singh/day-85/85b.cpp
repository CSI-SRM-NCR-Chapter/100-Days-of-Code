class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int,int>> pq1;
        priority_queue<int> pq2;
        for(int i=0;i<profits.size();i++)
            pq1.push({-1*capital[i], profits[i]});   

        for(int i=0;i<k;i++){
            while (!pq1.empty() && -1*pq1.top().first <= w ){
                pair<int,int> temp = pq1.top();
                pq1.pop();
                pq2.push(temp.second);
            }
            if(!pq2.empty()){
            w += pq2.top();
            pq2.pop();
            }
            else break;
        }
        return w;
    }
};
