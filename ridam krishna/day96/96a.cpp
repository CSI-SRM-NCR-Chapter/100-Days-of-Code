class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int>ans={1};
        vector<int>temp;
        int n1=1;
        while(n1<n){
            for(auto x: ans){
                if(2*x<=n)
                temp.push_back(2*x);
            }
            for(auto x: ans){
                if(2*x-1<=n)
                temp.push_back(2*x-1);
            }
            ans=temp;
            temp.clear();
            n1=ans.size();
        }
        return ans;
    }
};
