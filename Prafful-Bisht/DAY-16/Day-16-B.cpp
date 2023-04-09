class Solution {
public:
    int ans = INT_MAX;
    void solve(int s, vector<int>& nums, vector<int>& temp, int k){
        if(s==nums.size()){
            int maxi = INT_MIN;
            for(int i=0;i<k;i++){
                maxi = max(maxi,temp[i]);
            }
            ans = min(ans,maxi);
            return;
        }
        for(int j=0;j<k;j++){
            temp[j] += nums[s];
            solve(s+1,nums,temp,k);
            temp[j] -= nums[s];
        }
    }
    
    int distributeCookies(vector<int>& nums, int k) { 
        
        vector<int> temp(k,0); 
        solve(0,nums,temp,k);
        return ans;
    }
};