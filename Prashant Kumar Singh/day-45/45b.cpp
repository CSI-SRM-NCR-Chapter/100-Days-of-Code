class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftSum(n);
        vector<int> rightSum(n);
        vector<int>answer(n);

        leftSum[0]=0;
        rightSum[n-1]=0;

        for(int i=1;i<n;i++){
           leftSum[i]=leftSum[i-1]+nums[i-1];
        }

        for(int i=n-2;i>=0;i--){
            rightSum[i]=rightSum[i+1]+nums[i+1];
        }
        
        for (int i=0;i<n;i++){
            answer[i]=abs(leftSum[i]-rightSum[i]);
        }

    return answer;
    }
};
