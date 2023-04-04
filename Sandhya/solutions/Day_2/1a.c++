class Solution {
public:
    int singleNumber(vector<int>& n) {
        sort(n.begin(),n.end());
        int p = n.size();
        for(int i=1;i<p;i=i+2)
        {
            if(n[i]!=n[i-1])
            return n[i-1];
        }
        return n[n.size()-1];
    }
};