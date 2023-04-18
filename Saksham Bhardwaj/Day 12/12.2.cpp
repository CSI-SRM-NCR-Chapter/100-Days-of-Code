class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int flag;
        int count;
        int m = ransomNote.size();
        int n = magazine.size();

        for (int i = 0; i < m; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (ransomNote[i]==magazine[j])
                {
                    count++;
                    magazine[j]=64;
                    break;
                }
            }
            if (count == 0)
            {
                return false;
            }
        }
    return true;
    }
};
