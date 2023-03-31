class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i=0, j = 0;

        reverse(s.begin(), s.end());

        while (i<s.size()) {
            j = i;
            while (j<n and s[j] == ' ') j++;
            
            if (i==0 or j==s.size()) {
                s.erase(s.begin()+i, s.begin()+j);
            }
            else if (i>0 and j-i > 0) {
                s.erase(s.begin()+i+1, s.begin()+j);
                i = i+1;
            }

            j = i;
            while (i<n and s[i] != ' ') i++;
            while (i>s.size()) i--;
            reverse(s.begin()+j, s.begin()+i);
        }

        return s;
    }
};
