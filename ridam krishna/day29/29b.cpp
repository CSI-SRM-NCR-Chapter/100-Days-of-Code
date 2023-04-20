class Solution {
public:
    int kthGrammar(int n, int k) {
        int count=0;
        int a=k-1;
        while(a){
            count = count + (a&1);
            a>>=1;
        }
        return count&1;
    }
};
