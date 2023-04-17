class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.length();
        int n=t.length(); int flag=1;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(m!=n) return false;
        else{
        for(int i=0;i<m;i++){
            if(s[i]!=t[i])
            flag=0;
        }
        }
            if(flag==0) return false;
            else return true;
    }
};