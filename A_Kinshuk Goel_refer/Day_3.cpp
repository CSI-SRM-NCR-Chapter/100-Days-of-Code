class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> v(2);
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            if(*it>target) continue;
            mp[*it]++;
            if(mp[target-(*it)]>0)
            {
                auto i = find(nums.begin(),nums.end(),target-(*it));
                v[0] = (int)(nums.begin()-i);
                v[1] = (int)(nums.begin()-it);
                return v;
            }
        }
        return v;
    }
}; //Day 3.1

class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0||(x%10)==0&&x!=0) return 0;
    unsigned int nw = 0;
    while(x>nw)
    {
        nw = (nw*10) + (x%10);
        x/=10;
    }
    if(nw==x||nw/10==x) return 1;
    return 0;
    }
}; //Day 3.2