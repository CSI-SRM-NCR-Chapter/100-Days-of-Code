class Solution {
public:
    int bestRotation(vector<int>& nums) {
        int n=nums.size();   //ntme
        vector<int> rots(n);
        for(int i=0; i<n; ++i){
            int d=nums[i] - i;
            if (d>0) --rots[n-d];
            else --rots[-d];
        }
        int m=0, s=0, k=0;
        for (int i=0; i<n; ++i){
            s+=rots[i]+1;
            if(s > m){
                m=s;
                k=i+1;
            }
        }
        return k;
    }
};
