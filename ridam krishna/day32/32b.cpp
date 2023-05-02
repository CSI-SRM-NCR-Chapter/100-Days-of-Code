class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0; i<=n; i++){
            int temp=i;
            int count=0;
            while(temp){
                count=count+(temp&1);
                temp>>=1;
            }
            v.push_back(count);
        }
        return v;
    }
};
