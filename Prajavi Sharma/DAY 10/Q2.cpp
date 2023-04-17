class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int mainSum=0;
        int sum=0;
        for(int i=0;i<=n;i++){
            mainSum+=i;

        }
        for(int i=0;i<n;i++){
            sum+=nums[i];

        }
        return (mainSum-sum);


    
      
        
    }
};
