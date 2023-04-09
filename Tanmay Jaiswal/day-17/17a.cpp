class Solution
{
public:
    int firstUniqChar(string s)
    {
        int j = 0;
        vector<pair<int, int>> freq(26);
        for (auto i : s)
            freq[i - 'a'].first++, freq[i - 'a'].second = j++;
        for (auto i : s)
            if (freq[i - 'a'].first == 1)
                return freq[i - 'a'].second;
        return -1;
    }
};