class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string result;
        int n = s.length();
        while(i<n){
            while(i<n && s[i] == ' ')i++;
            if(i>=n) break;
            int j=i+1;
            while(j<n && s[j] != ' ')j++;
            string sub = s.substr(i,j-i);
            if(result.length()==0) result = sub;
            else result = sub + " " + result;
            i = j+1;
        }
        return result;
    }
};