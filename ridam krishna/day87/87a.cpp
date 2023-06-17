class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int a,b,c;
        sort(begin(nums), end(nums), greater<int>());
        while(nums.size()-i-2){
            a=nums[i];
            b=nums[i+1];
            c=nums[i+2];
            if(a+b>c and a+c>b and b+c>a) return a+b+c;
            i++;
        }
        return 0;
    }
};
