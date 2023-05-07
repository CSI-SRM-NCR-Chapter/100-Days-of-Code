class Solution {
public:
    int calPoints(vector<string>& A) {
        vector<int> v;
        for (auto &w : A) {
            if (isdigit(w.back())) v.push_back(stoi(w));
            else if (w == "+") v.push_back(v.back() + v[v.size() - 2]);
            else if (w == "D") v.push_back(v.back() * 2);
            else v.pop_back();
        }
        return accumulate(begin(v), end(v), 0);
    }
};