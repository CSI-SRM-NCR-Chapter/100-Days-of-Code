class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        
        int cnt =0;
        for(int i=n;i>=0;i--){
            if(s[i] != ' '){
                cnt++;
            }
            else if(cnt>0){
                return cnt;
            }
                
            
        }
        return cnt;
    }
};
