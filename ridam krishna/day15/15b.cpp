class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        vector<int> nums;
        for(int b=2; b<=n-2;b++){
            while(n){
                nums.push_back(n%b);
                n=n/2;
            }
            for(int i=0; i<nums.size(); i++){
                if(nums[i]!=nums.size()-1-i) return false;
            }

        }


        // for(auto x: nums){
        //     cout<<x<<" ";
        // }
        return true;
    }
};
