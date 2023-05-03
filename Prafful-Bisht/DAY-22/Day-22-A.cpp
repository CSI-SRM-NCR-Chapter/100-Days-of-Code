class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
            int k=s.length()-1;
            while(k>=0 && s[k]== ' ' ){
                k--;
            }
            int j = k;
            while(j>=0 && s[j]!=' '){
                count++;
                j--;
            }
            return count;
        
    }
};