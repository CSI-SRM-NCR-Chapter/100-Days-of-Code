class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<int, int> m;
        for (char c : s) m[c]++;

        vector<pair<char, int>> v;

        for (auto it : m) v.push_back({it.first, it.second});

        sort(v.begin(), v.end(), [](pair<char, int> &a, pair<char, int> &b)
             { return a.second > b.second; });
        string ss;
        for (auto it : v)
        {
            int a = abs((it).second);
            while (a--)
                ss.push_back((it).first);
        }
        return ss;
    }
};
