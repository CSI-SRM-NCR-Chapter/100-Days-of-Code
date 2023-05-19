class Solution {
public:
    int arraySign(vector<int>& nums) {
        int zero = 0;
        int neg = 0;
        for (auto i: nums)
            if (i<0) neg++;
            else if (i==0) zero++;
        
        if (zero) return 0;
        if (neg%2) return-1;
        return 1;
    }
};
