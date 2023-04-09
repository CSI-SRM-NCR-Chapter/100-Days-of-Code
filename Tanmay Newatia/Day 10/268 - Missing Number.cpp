class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=nums.size(), ans=0;
        for(auto i:nums){
            result^=i;
            result^=ans;
            ans++;
        }
        return result;
    }
};

/*class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx=nums[nums.size()-1];
        for(int i=0;i<=mx;i++){
            if (i!=nums[i]){
                return i;
            }
        }
        return mx+1;
    }
};*/