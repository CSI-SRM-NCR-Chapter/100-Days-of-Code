class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i;
        unordered_map<char, char> m;
        unordered_map<char, char> n;


        for(i=0 ; i<s.length() ; i++)
        {
            m[s[i]] = t[i];
        }
        for(i=0 ; i<t.length() ; i++)
        {
            n[t[i]] = s[i];
        }


        for(i=0 ; i<s.length() ; i++)
        {
            for( auto it:m)
            {
                if(it.first==s[i] && it.second!=t[i])
                {
                    return false;
                }
            }
        }
        for(i=0 ; i<t.length() ; i++)
        {
            for( auto it:n)
            {
                if(it.first==t[i] && it.second!=s[i])
                {
                    return false;
                }
            }
        }

        
        return true;
    }
};
