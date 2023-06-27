class Solution {
public:
    int minImpossibleOR(vector<int>& nums) 
    {
        unordered_set<long long>s(begin(nums),end(nums));
        for(int i=0;i<=32;i++)
        {
            long long num=(1<<i);
            if(s.find(num)==s.end())
                return num;
        }
        return -1;
    }
};
