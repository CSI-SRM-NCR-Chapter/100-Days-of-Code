class Solution {
public:
    static bool comparator(vector<int>& x, vector<int>& y){
        if(x[0]==y[0]) return x[1]<y[1];
        return x[0]>y[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) 
    {   
        sort(people.begin(), people.end(), comparator);
        vector<vector<int>> res;                   
        for(auto a : people){
            res.insert(res.begin()+a[1], a);   
        }
        return res;
    }
};
