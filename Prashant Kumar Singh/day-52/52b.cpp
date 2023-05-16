class Solution
{
public:
    string reverseWords(string s)
    {
        string::iterator ptrI = s.begin();
        string::iterator ptrJ;
        for(ptrJ = s.begin(); ptrJ != s.end(); ++ptrJ)
        {
            if(*ptrJ == ' ')
            {
                reverse(ptrI, ptrJ);
                ptrI = ptrJ + 1;
            }
        }
        reverse(ptrI, ptrJ);
        return s;
    }
};
