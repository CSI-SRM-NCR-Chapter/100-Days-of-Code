class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int count=0;

        for(int x=0; x<n; x++){
            if(word[x]>=65 and word[x]<=90){
                count++;
            }
        }
        if(count==n) return true;
        count=0;

        for(int x=0; x<n; x++){
            if(word[x]>=97 and word[x]<=122){
                count++;
            }
        }
        if(count==n) return true;
        count=0;

        for(int x=0; x<n; x++){
            if(word[0]>=65 and word[0]<=90){
                if(word[x]>=97 and word[x]<=122){
                    count++;
                }
            }
        }
        if(count==n-1) return true;
        return false;
    }
};
