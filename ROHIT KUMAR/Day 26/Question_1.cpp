class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string resulyarr[26];
        vector<string> stored;
        for(int i=0;i<s.size();i++)
        {
            string some = "";
            while(s[i] != ' ' && i<s.size())
            {
                some += s[i];
                i++;
            }
        stored.push_back(some);
        }
        if(pattern.size() != stored.size())
        {
            return false;
        }
        int index=0;
        for(int i=0;i<pattern.size();i++)
        {
            for(int j=0;j<26;j++)
            {
                if(resulyarr[j]==stored[index] && j!=(pattern[i]-'a'))
                {
                    return false;
                }
            }
            resulyarr[pattern[i]-'a'] = stored[index++];
        }
        string res = "";
        for(int i=0;i<pattern.size();i++)
        {
            if(i==0)
            res += resulyarr[pattern[i]-'a'];
            else
            res +=" " + resulyarr[pattern[i]-'a'];
        }
        cout<<s<<endl<<res;
        return s == res;
    }
};
