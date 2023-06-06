class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int n=nums.size();
        int mx=0; //ntme

        for(int j=0; j<n; j++){
            int i=j+1;
            while(i<n and (nums[i]-nums[j])<=1){
                i++;
            }
            if(nums[i-1]-nums[j]==1){
                mx=max(mx,i-j);
            }
        }
        
        return mx;
    }
};
