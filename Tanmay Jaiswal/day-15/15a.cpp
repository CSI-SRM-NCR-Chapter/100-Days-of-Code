class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        int i=0;

        string ans = "123456789";

        while (i<n) {
            int j=i+1;
            while(j<n and pattern[i]==pattern[j]) j++;
            if (pattern[i] == 'D') reverse(ans.begin()+i, ans.begin()+j+1);
            
            i = j;
        }

        return ans.substr(0,n+1);
    }
};
