class Solution {
public:
    int minTimeToType(string word) {
        char StartChar = 'a';
        int ans = 0;

        int n = word.length();

        for(int i=0;i<n;i++)
        {
            ans+=( min( abs(word[i] - StartChar),26 - abs(word[i] - StartChar) ) + 1 );
            StartChar = word[i];
        }

        return ans;
    }
};
