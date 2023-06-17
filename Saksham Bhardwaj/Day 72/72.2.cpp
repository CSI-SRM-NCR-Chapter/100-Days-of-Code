class Solution {
public:
    bool detectCapitalUse(string s) 
    {
        bool firstCapital=isupper(s[0]), allCapital=true, allSmall=true; 
        int n=s.size();
        for(int i=1;i<n;i++)
        {
            if(isupper(s[i])) allSmall = false;
            else allCapital = false;
        }
        return (firstCapital && allCapital) || allSmall ; //it also satisfies 3rd condition
    }
};
