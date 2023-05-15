class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int count=0;
        for(auto x: words){
            for(int i=0; i<n; i++){
                if(x[i]==pref[i]){
                    if(i==n-1){
                        count++;
                        break;
                    }
                }
                else break;
            }
        }
        return count;
    }
};
