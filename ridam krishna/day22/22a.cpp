class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]==' ' && i==s.length()-1){
                s.erase(s.begin()+i);
                continue;
            }
            if(s[i]!=' ') count++;
            else break;
        }
        return count;
    }
};
