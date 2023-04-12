class Solution {
public:
    int minNumber(vector<int>& v1, vector<int>& v2) {
        vector<int> v(10,0);
        for(auto &i: v1)v[i]++;
        for(auto &i: v2)v[i]++;
        for(int i = 1; i < 10; i++)if(v[i]>1)return i;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return min({v1[0]*10+v2[0],v1[0]+v2[0]*10});
    }
};
