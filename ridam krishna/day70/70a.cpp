class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1);  //ntme
        vector<int> v1(rowIndex+1);
        int i=0; int j=0;
        for(i=0; i<=rowIndex; i++){
            for(j=0; j<=i; j++){
                if(j==0 || j==i) res[j]=1;
                else res[j]=v1[j]+v1[j-1];
            }
            v1=res;
        }
        return res;
    }
};
