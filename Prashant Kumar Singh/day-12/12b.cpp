class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int m = ransomNote.size();
        int n = magazine.size();

        unordered_map <char, int> mpp;
        for(int i = 0; i < m; i++)
            mpp[ransomNote[i]]++;

        for(int i = 0; i < n; i++)
            mpp[magazine[i]]--;

        for(auto x: mpp)
        {
            if(x.second > 0)
                return false;
        }
        return true;        
    }
};
