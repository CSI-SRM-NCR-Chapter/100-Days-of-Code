class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n=s.length();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(s[i] == s[j]){
                    int ans = j-i-1;
                    if(ans == distance[s[i]-'a']) continue;
                    else return false;
                }
            }
        }
        return true;
    }
};
