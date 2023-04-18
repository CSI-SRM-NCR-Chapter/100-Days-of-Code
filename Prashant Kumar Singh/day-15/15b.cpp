class Solution {
public:
    bool base(int n, int b){
        string s="";
        while(n>=1){
            s+=to_string(n%b);
            n/=b;

        }
        int i=0,j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        bool res=base(n,2);
        for(int i=3;i<=n-2;i++){
            res=res && base(n,i);
        }
        return res;
    }
};
