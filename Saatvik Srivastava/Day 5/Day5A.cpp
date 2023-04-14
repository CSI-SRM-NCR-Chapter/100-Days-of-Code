class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n =nums.size();
         for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        int majority =0;
        for(auto i = mp.begin(); i != mp.end();i++){
            if(i->second > n/2){
                majority = i->first;
            }
        }
        return  majority;
    }

};
