class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        int ans=0;
        for(int i=0; i<s.length(); i++){
            for(int j=i+1; j<s.length(); j++){
                if(s[i]==s[j]){
                    ans=j-i-1;
                    if(ans!=d[s[i]-'a']) return false;
                }
            }
        }
        return true;

    }
};
