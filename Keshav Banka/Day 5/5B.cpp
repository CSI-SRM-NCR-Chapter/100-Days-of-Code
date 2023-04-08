bool containsDuplicate(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (auto ele: arr) {
            if (mp.count(ele)) return true;
            mp[ele] = 1;
        }
        return false;
    }
