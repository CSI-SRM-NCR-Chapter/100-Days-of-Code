class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i : nums){
            if(m[i]==1){
                return true;
            }
            m[i]++;
        }
        return false;

    }
};
