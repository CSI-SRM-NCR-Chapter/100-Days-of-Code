class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> mp;
        vector<string> s={"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        int count=1;
        for(auto x: s){
            for(auto y: x){
                mp[y]=count;
                mp[toupper(y)]=count;
            }
            count++;
        }

        vector<string> res;
        unordered_set<int> row;
        for(auto i: words){
            for(auto j: i){
                row.insert(mp[j]);
            }
            if(row.size()==1) res.push_back(i);
            row.clear();
        }
        return res;
    }
};
