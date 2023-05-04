class Solution {

public:

    int lengthOfLastWord(string s) {

        int count = 0;

        int i = s.size()-1;

        while(i>=0 && s[i] == ' ') i--;
        
        while(i>=0 && s[i] != ' ') i--, count++;

        return count;

    }    

};
