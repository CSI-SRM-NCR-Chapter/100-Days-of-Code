class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> ans;
        while(n>0){
            if (n==1)
            {
                ans.push_back(n);
                break;
            }
            int temp = n%2;
            ans.push_back(temp);
            n/=2;
        }
        for (int i = 1; i < ans.size(); i++)
        {
            if (ans[i-1]==ans[i])
            {
                return false;
            }
        }
        return true;
    }
};
