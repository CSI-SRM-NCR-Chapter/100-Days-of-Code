class Solution {
public:
    vector<int> countBits(int n) {
         vector<int> ans;
        if(n==0)
        return {0};
        int a=0;
        while(a<=n)
        {
            int b=a;
            int count=0;
            while(b){
                if(b&1)
                count++;

                b>>=1;
            }
            ans.push_back(count);
            a++;
        }
        return ans;
    }
};
