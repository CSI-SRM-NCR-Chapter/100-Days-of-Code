class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v;
        int temp=0;
        long int sum=0;
        int size=2*k+1;
        for(int i=0; i<n; i++) {
            sum+=nums[i];
            if(i<k){
                v.push_back(-1);
                continue;
            }
            if(i>=2*k and i<=n-1){
                v.push_back(sum/size);
                sum-=nums[temp];
                temp++;
            }
        }
        while(v.size()!=n){
            v.push_back(-1);
        }
        return v;
    }
};
