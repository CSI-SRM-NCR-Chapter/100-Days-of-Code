class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            if(v.size() == 0 || v.back() != nums[i]) v.push_back(nums[i]);
        }
        int res = 0;
        for(int i = 1; i < v.size() - 1; i++){
            if(v[i] < v[i - 1] && v[i] < v[i + 1]) res++;
            else if(v[i] > v[i - 1] && v[i] > v[i + 1]) res++;
        }
        return res;
    }
};
