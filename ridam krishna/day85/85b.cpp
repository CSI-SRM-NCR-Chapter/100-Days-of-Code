class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        priority_queue<pair<int,int>> pq1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq2;
        for(int i=0;i<p.size();i++){
            if(c[i]>w) pq2.push({c[i],p[i]});
            else pq1.push({p[i],c[i]});
        }
        
        while(k>0 && (!pq1.empty() || !pq2.empty())){
            while(!pq2.empty() && pq2.top().first<=w){
                pq1.push({pq2.top().second,pq2.top().first});
                pq2.pop();
            }
            if(!pq1.empty()) {
                w+=pq1.top().first;
                pq1.pop();
                k--;
            } else return w;
        }
        return w;
    }
};
