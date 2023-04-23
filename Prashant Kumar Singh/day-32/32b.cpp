class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            int count = 0;
            int sum = i;
            while(sum!=0){
                count += sum % 2;
                sum /= 2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
