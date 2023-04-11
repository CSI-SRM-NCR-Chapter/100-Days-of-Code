class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> retlist;
        for(auto i:mp){
            if (i.second==2){
                retlist.push_back(i.first);
            }
        }
        return retlist;
    }
};

/*class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> retlist;
        for(auto i:mp){
            if (mp[i.first]==2){
                retlist.push_back(i.first);
            }
        }
        return retlist;
    }
};*/