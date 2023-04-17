class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                cnt++;
            }
            else{
                maxcount=max(maxcount,cnt);
                cnt=0;
            }
        }
        maxcount=max(maxcount,cnt);

        return maxcount;
    }
};
