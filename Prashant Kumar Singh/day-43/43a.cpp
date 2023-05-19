class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> scores(n);

        int j = 0;
        for (auto ch: operations) {
            if (ch == "+") scores[j++] = scores[j-1]+scores[j-2];
            else if (ch == "D") scores[j++] = scores[j-1]*2;
            else if (ch == "C") scores[--j] = 0;
            else scores[j++] = stoi(ch);
        }

        return accumulate(begin(scores), end(scores), 0);
    }
};
