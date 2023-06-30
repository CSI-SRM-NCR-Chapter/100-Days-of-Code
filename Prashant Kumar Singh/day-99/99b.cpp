class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> temp;
        vector<string> res(score.size());
        for(int i = 0; i < score.size(); i++)
            temp.push_back({score[i], i});

        sort(temp.rbegin(), temp.rend());

        for(int i = 0; i < temp.size(); i++){
            if(i == 0) res[temp[i].second] = "Gold Medal";
            else if(i == 1) res[temp[i].second] = "Silver Medal";
            else if(i == 2) res[temp[i].second] = "Bronze Medal";
            else res[temp[i].second] = to_string(i + 1);
        }
        return res;
    }
};
