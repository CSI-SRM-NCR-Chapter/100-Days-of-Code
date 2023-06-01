class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size();
        int sum=0,maxx=INT_MIN;
        double ans=0;

        while(j<n) {
            sum+=nums[j];
            if(j-i+1<k) j++;
            else if(j-i+1==k) {
                maxx = max(maxx,sum);
                sum -= nums[i];
                i++;
                j++;
            }
        }

        return maxx/(double)k;
    }
};
