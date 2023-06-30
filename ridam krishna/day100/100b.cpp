class Solution {
public:
    int sumOfPower(vector<int>& nums) { //ntme
        vector<long long> d;
        for(auto i: nums)d.push_back(i);
        
        long long mod = 1e9+7;
        sort(d.begin(),d.end());
        
        long long mn=0, res=0;
        for(int i=0;i<d.size();i++){
            res=(res+((d[i]*d[i])%mod)*d[i]%mod)%mod;
            res = (res+((mn * d[i])%mod)*d[i]%mod)%mod;
            mn = (mn*2)%mod;
            mn = (mn+d[i]) % mod;
        }
        int ans = res%mod;
        return ans;
    }
};
