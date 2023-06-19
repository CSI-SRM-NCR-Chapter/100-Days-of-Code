class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0;
        int temp=0;
        for(auto x: gain){
            res=max(res,x+temp);
            temp+=x;
        }
        return res;
    }
};
