class Solution {
public:
    int ans=INT_MAX;
    int distributeCookies(vector<int>& arr, int k) {
        vector<int>v;
        v.resize(k,0);
        sol(arr,0,k,v);
        return ans;
    }
    void sol(vector<int>&arr,int idx,int &k,vector<int>&v)
    {
        if(idx>=arr.size()){
            int c=0;
            for(int i=0;i<v.size();i++){
                c=max(c,v[i]);
            }
            ans=min(ans,c);
            return;
        }
        for(int i=0;i<k;i++){
            v[i]+=arr[idx];
            sol(arr,idx+1,k,v);
            v[i]-=arr[idx];
        }
    }
};
